package main

import (
	"errors"
	"fmt"
	"math/rand"
	"slices"
	"testing"
	"time"
)

func generateRandomArray(N int) []int {
	// Seed the random number generator
	rand.Seed(time.Now().UnixNano())

	// Create a slice with a length of N
	array := make([]int, N)

	// Populate the array with random values
	for i := 0; i < N; i++ {
		array[i] = rand.Intn(10000000000) // Random numbers between 0 and 99
	}

	return array
}

func NaiveSearch(v int, slice []int) (int, error) {
	for i, value := range slice {
		if value == v {
			return i, nil
		}
	}
	return 0, errors.New("element not found")
}

func FastNaiveSearch(v int, slice []int) (int, error) {
	// slice = append(slice, v)
	// i := 0
	// for {
	// 	if slice[i] == v {
	// 		if i == (len(slice)) {
	// 			return 0, errors.New("element not found")
	// 		}
	// 		return i, nil
	// 	}
	// 	i++
	// }
	n := len(slice)

	slice = append(slice, v)

	i := 0
	for slice[i] != v {
		i++
	}

	if i == n {
		return 0, errors.New("element not found")
	}
	return i, nil
}

func FastNaiveSearchSorted(v int, slice []int) (int, error) {
	slice = append(slice, v)
	i := 0
	for {
		if slice[i] >= v {
			if i == (len(slice)) || slice[i] > v {
				return 0, errors.New("element not found")
			}
			return i, nil
		}
		i++
	}
}

func BlockSearch(v int, slice []int) (int, error) {
	if v <= 0 || len(slice) == 0 {
		return 0, errors.New("element not found")
	}
	medium := len(slice) / 2
	if slice[medium] == v {
		return medium, nil
	}
	if slice[medium] > v {
		res, err := BlockSearch(v, slice[0:medium])
		return res, err
	}
	res, err := BlockSearch(v, slice[medium:])
	return res, err
}

func BinarySearch(v int, slice []int) (int, error) {
	l, r := 0, len(slice)
	for l < r {
		mid := (l + r) / 2
		if slice[mid] == v {
			return slice[mid], nil
		}
		if slice[mid] > v {
			r = mid
		}
		if slice[mid] < v {
			l = mid
		}
	}
	return 0, errors.New("element not found")
}

var SizeOfCases = []int{50, 100, 150, 200, 300, 350, 400, 450}

func BlockSearch1(v int, slice []int) (int, error) {
	// Base case: If the slice is empty, return an error
	if len(slice) == 0 {
		return -1, errors.New("element not found")
	}

	// Find the middle index
	medium := len(slice) / 2

	if slice[medium] == v {
		return medium, nil
	}

	if slice[medium] > v {
		result, err := BlockSearch(v, slice[:medium])
		if err != nil {
			return -1, err
		}
		return result, nil
	} else {
		result, err := BlockSearch(v, slice[medium+1:])
		if err != nil {
			return -1, err
		}
		return medium + 1 + result, nil
	}
}

func main() {
	// Example usage
	slice := []int{1, 3, 5, 7, 9, 11, 13, 15}
	value := 7

	index, err := BlockSearch(value, slice)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Element %d found at index %d\n", value, index)
	}
}

func BenchmarkNaiveSearch(b *testing.B) {
	for _, t := range SizeOfCases {
		b.Run(fmt.Sprintf("size of case: %d", t), func(b *testing.B) {
			b.StopTimer()
			value := 355
			arr := generateRandomArray(t)
			b.StartTimer()
			for i := 0; i < b.N; i++ {
				NaiveSearch(value, arr)
			}
		})
	}
}

func BenchmarkFastNaiveSearch(b *testing.B) {
	for _, t := range SizeOfCases {
		b.Run(fmt.Sprintf("size of case: %d", t), func(b *testing.B) {
			b.StopTimer()
			value := 355
			arr := generateRandomArray(t)
			b.StartTimer()
			for i := 0; i < b.N; i++ {
				FastNaiveSearch(value, arr)
			}
		})
	}
}

func BenchmarkFastNaiveSearchSorted(b *testing.B) {
	for _, t := range SizeOfCases {
		b.Run(fmt.Sprintf("size of case: %d", t), func(b *testing.B) {
			b.StopTimer()
			value := 355
			arr := generateRandomArray(t)
			slices.Sort(arr)
			b.StartTimer()
			for i := 0; i < b.N; i++ {
				FastNaiveSearchSorted(value, arr)
			}
		})
	}
}

func BenchmarkBlockSearch(b *testing.B) {
	for _, t := range SizeOfCases {
		b.Run(fmt.Sprintf("size of case: %d", t), func(b *testing.B) {
			b.StopTimer()
			value := 393
			arr := generateRandomArray(t)
			slices.Sort(arr)
			b.StartTimer()
			for i := 0; i < b.N; i++ {
				BlockSearch(value, arr)
			}
		})
	}
}

func BenchmarkBinarySearch(b *testing.B) {
	for _, t := range SizeOfCases {
		b.Run(fmt.Sprintf("size of case: %d", t), func(b *testing.B) {
			b.StopTimer()
			value := 355
			arr := generateRandomArray(t)
			slices.Sort(arr)
			b.StartTimer()
			for i := 0; i < b.N; i++ {
				BinarySearch(value, arr)
			}
		})
	}
}
