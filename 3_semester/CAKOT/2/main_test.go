package main

import (
	"fmt"
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestFindSubStringWithK(t *testing.T) {
	assert.Equal(t, FindSubStringWithSuffixArray("Banana", "ana"), []int{3, 1}, "They should be equal")
	assert.Equal(t, FindSubStringWithSuffixArray("Bananananana", "ana"), []int{9, 7, 5, 3, 1}, "They should be equal")
	assert.Equal(t, FindSubStringWithSuffixArray("Do you like what do you see?", "what"), []int{12}, "They should be equal")
	assert.Equal(t, FindSubStringWithSuffixArray("Do you like what do you see?", "My name is, What?"), ([]int)(nil), "They should be equal")
}

func TestFindSubStringWithRabinKrapin(t *testing.T) {
	assert.Equal(t, FindSubStringWithRabinKrapin("Banana", "ana"), []int{3, 1}, "They should be equal")
	assert.Equal(t, FindSubStringWithRabinKrapin("Bananananana", "ana"), []int{9, 7, 5, 3, 1}, "They should be equal")
	assert.Equal(t, FindSubStringWithRabinKrapin("Do you like what do you see?", "what"), []int{12}, "They should be equal")
	assert.Equal(t, FindSubStringWithRabinKrapin("Do you like what do you see?", "My name is, What?"), ([]int)(nil), "They should be equal")
}

func BenchmarkFindSubStringWithSuffixArray(b *testing.B) {
	for _, v := range TestSubString {
		b.Run(fmt.Sprintf("input: %q \n", v.input), func(b *testing.B) {
			for i := 0; i < b.N; i++ {
				FindSubStringWithSuffixArray(TestString, v.input)
			}
		})
	}
}

func BenchmarkFindSubStringWithRabinKrapin(b *testing.B) {
	for _, v := range TestSubString {
		b.Run(fmt.Sprintf("input: %q \n", v.input), func(b *testing.B) {
			for i := 0; i < b.N; i++ {
				FindSubStringWithRabinKrapin(TestString, v.input)
			}
		})
	}
}
