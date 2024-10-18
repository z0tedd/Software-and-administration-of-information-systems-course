package main

import (
	"fmt"
	"math/rand"
	"time"
)

func shellSort(arr []int) []int {
	for gap := len(arr) / 2; gap > 0; gap /= 2 {
		for i := gap; i < len(arr); i++ {
			// insertion sort with a gap
			for j := i; j >= gap && arr[j-gap] > arr[j]; j -= gap {
				arr[j], arr[j-gap] = arr[j-gap], arr[j]
			}
		}
	}
	return arr
}

func giveArray() [][]int {
	arrs := [][]int{
		{45, 47, 85, 78, 3},
		{36, 22, 16, 78, 49, 31, 57, 79, 6, 18},
		{1, 53, 43, 4, 2, 60, 37, 26, 97, 40, 65, 81, 93, 51, 2},
		{17, 35, 10, 66, 13, 74, 36, 77, 3, 94, 35, 24, 57, 90, 97, 12, 73, 61, 97, 56},
		{40, 19, 90, 21, 72, 76, 3, 90, 2, 67, 12, 77, 27, 63, 24, 48, 47, 58, 31, 9, 86, 74, 97, 39, 73},
		{74, 17, 68, 23, 27, 46, 34, 3, 97, 6, 8, 9, 92, 1, 23, 34, 88, 1, 28, 100, 88, 81, 6, 21, 23, 13, 23, 30, 8, 66},
		{12, 31, 29, 65, 53, 58, 65, 56, 47, 44, 75, 21, 71, 43, 95, 17, 59, 2, 6, 36, 24, 40, 24, 14, 16, 17, 17, 72, 6, 7, 3, 97, 28, 15, 48},
		{67, 70, 4, 75, 68, 58, 60, 96, 2, 37, 34, 13, 17, 11, 66, 9, 58, 58, 53, 71, 53, 53, 35, 86, 73, 6, 18, 43, 52, 51, 9, 36, 99, 17, 84, 40, 91, 85, 47, 73},
		{4, 76, 25, 60, 42, 79, 37, 9, 5, 59, 94, 36, 18, 70, 82, 19, 30, 90, 49, 78, 29, 91, 52, 85, 95, 18, 93, 25, 82, 7, 61, 85, 44, 14, 94, 61, 81, 3, 45, 41, 78, 99, 48, 63, 23},
	}
	return arrs
}

func getDuration(arr []int, f func(arr []int) []int) {
	before := make([]int, len(arr))
	copy(before, arr)
	start := time.Now()
	after := f(before)
	_ = after // do nothing
	duration := time.Since(start)
	fmt.Println("время сортировки - ", duration)
	// fmt.Println(after)
}

func main() {
	r := rand.New(rand.NewSource(time.Now().Unix()))
	arr := r.Perm(100000)

	before := make([]int, len(arr))
	copy(before, arr)
	start := time.Now()
	after := shellSort(before)
	_ = after // do nothing
	duration := time.Since(start)
	fmt.Println("время сортировки - ", duration)

	fmt.Println("||||||||||||||||||||||||||||||||||||||||\n\n\n\n")
	getDuration(arr, shellSort)
}
