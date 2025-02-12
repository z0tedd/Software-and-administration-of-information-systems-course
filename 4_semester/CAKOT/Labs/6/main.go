package main

import (
	"bufio"
	"fmt"
	"os"
	"slices"
	"strconv"
	"strings"
)

// Реализация стека
type Stack struct {
	data []int
}

// Метод для добавления элемента в стек
func (s *Stack) Push(value int) {
	s.data = append(s.data, value)
}

// Метод для удаления элемента из стека
func (s *Stack) Pop() (int, bool) {
	if len(s.data) == 0 {
		return 0, false
	}
	top := s.data[len(s.data)-1]
	s.data = s.data[:len(s.data)-1]
	return top, true
}

// Метод для получения верхнего элемента стека без удаления
func (s *Stack) Peek() int {
	if len(s.data) == 0 {
		return 0
	}
	return s.data[len(s.data)-1]
}

func (s *Stack) Values() []int {
	return s.data
}

func (s *Stack) IsEmpty() bool {
	return s.Peek() == 0
}

// Функция для чтения чисел из текстового файла
func readNumbersFromFile(filename string) ([]int, error) {
	file, err := os.Open(filename)
	if err != nil {
		return nil, err
	}
	defer file.Close()
	var numbers []int
	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		line := scanner.Text()
		parts := strings.Fields(line)
		for _, part := range parts {
			num, err := strconv.Atoi(part)
			if err != nil {
				continue // Пропускаем некорректные значения
			}
			numbers = append(numbers, num)
		}
	}
	return numbers, scanner.Err()
}

// Функция для записи чисел в текстовый файл
func writeNumbersToFile(filename string, numbers []int) error {
	file, err := os.Create(filename)
	if err != nil {
		return err
	}
	defer file.Close()
	for _, num := range numbers {
		_, err := fmt.Fprintln(file, num)
		if err != nil {
			return err
		}
	}
	return nil
}

// Основная функция разбиения файла с использованием стека
func splitFile(inputFile, fileA, fileB string) error {
	// Чтение исходного файла
	numbers, err := readNumbersFromFile(inputFile)
	if err != nil {
		return err
	}
	sourceStack := Stack{}
	for i := len(numbers) - 1; i > -1; i-- {
		sourceStack.Push(numbers[i])
	}
	fmt.Println(sourceStack.Values())
	// Инициализация двух стеков
	stackA := &Stack{}
	stackB := &Stack{}

	// Распределение элементов по стекам
	for !sourceStack.IsEmpty() {
		val, _ := sourceStack.Pop()

		// Первый элемент всегда в B
		if stackB.IsEmpty() {
			stackB.Push(val)
			continue
		}

		// Попеременное распределение
		if stackA.IsEmpty() || val > stackA.Peek() || len(stackA.data) < len(stackB.data) {
			fmt.Println(val, stackA.Peek())
			stackA.Push(val)
		} else {
			stackB.Push(val)
		}
	}

	fmt.Println(numbers, len(stackA.data), stackA.Values(), stackB.Values())
	slices.Reverse(stackA.data)
	slices.Reverse(stackB.data)
	// Запись результатов в файлы
	if err := writeNumbersToFile(fileA, stackA.data); err != nil {
		return err
	}
	if err := writeNumbersToFile(fileB, stackB.data); err != nil {
		return err
	}

	return nil
}

func main() {
	inputFile := "input.txt"
	fileA := "fileA.txt"
	fileB := "fileB.txt"

	err := splitFile(inputFile, fileA, fileB)
	if err != nil {
		fmt.Println("Ошибка:", err)
	} else {
		fmt.Println("Файл успешно разбит на два файла.")
	}
}
