package main

import (
	_ "embed"
	"fmt"
	"strings"
)

type List[T comparable] struct {
	first *element[T]
	last  *element[T]
	size  int
}
type element[T comparable] struct {
	value T
	prev  *element[T]
	next  *element[T]
}

func New[T comparable](values ...T) *List[T] {
	list := &List[T]{}
	if len(values) > 0 {
		list.Add(values...)
	}
	return list
}

// func (list *List[T]) Add(values ...T) {
// 	for _, value := range values {
// 		newElement := &element[T]{value: value, prev: list.last}
// 		if list.size == 0 {
// 			list.first = newElement
// 			list.last = newElement
// 		} else {
// 			list.last.next = newElement
// 			list.last = newElement
// 		}
// 		list.size++
// 	}
// }
//
// func (list *List[T]) Append(values ...T) {
// 	list.Add(values...)
// }
//
// func (list *List[T]) Prepend(values ...T) {
// 	for v := len(values) - 1; v >= 0; v-- {
// 		newElement := &element[T]{value: values[v], next: list.first}
// 		if list.size == 0 {
// 			list.first = newElement
// 			list.last = newElement
// 		} else {
// 			list.first.prev = newElement
// 			list.first = newElement
// 		}
// 		list.size++
// 	}
// }
//
// func (list *List[T]) Get(index int) (T, bool) {
// 	if !list.withinRange(index) {
// 		var t T
// 		return t, false
// 	}
//
// 	if list.size-index < index {
// 		element := list.last
// 		for e := list.size - 1; e != index; e, element = e-1, element.prev {
// 		}
// 		return element.value, true
// 	}
// 	element := list.first
// 	for e := 0; e != index; e, element = e+1, element.next {
// 	}
// 	return element.value, true
// }
//
// func (list *List[T]) withinRange(index int) bool {
// 	return index >= 0 && index < list.size
// }

func (list *List[T]) MergeList(anotherList *List[T]) {
	for _, val := range anotherList.Values() {
		list.Merge(val)
	}
}

//go:embed test.txt
var file string

type word struct {
	word        string
	count       int
	pointedWord *string
}

func main() {
	Test1 := New(1, 2, 4, 5)
	Test2 := New(5, 4, 8, 9)
	Test1.MergeList(Test2)
	fmt.Println(Test1.String())

	// file, err := os.Open("test.txt")
	// if err!=nil{
	//   fmt.Print("error: opening file")
	//   return
	// }
	wordMap := make(map[string]struct {
		count       int
		line        int
		pointedWord *string
	})
	Ans := New(word{})
	splitedString := strings.Split(file, " ")
	for i, value := range splitedString {
		word := strings.ToLower(value) // Приводим слово к нижнему регистру
		if entry, exists := wordMap[word]; exists {
			entry.count++
			wordMap[word] = entry
		} else {
			wordMap[word] = struct {
				count       int
				line        int
				pointedWord *string
			}{count: 1, line: i, pointedWord: &value}
		}
	}
	for key, value := range wordMap {
		Ans.Add(word{key, value.count, value.pointedWord})
	}
	fmt.Println(Ans)
}
