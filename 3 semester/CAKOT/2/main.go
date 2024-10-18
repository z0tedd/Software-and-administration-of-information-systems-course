package main

import (
	"index/suffixarray"
	"math"
	"slices"
)

func FindSubStringWithSuffixArray(s string, subs string) []int {
	index := suffixarray.New([]byte(s))
	offset := index.Lookup([]byte(subs), -1)
	// fmt.Print("Indexes of substring - ", offset)
	return offset
}

func FindSubStringWithRabinKrapin(s string, sub string) []int {
	M := len(sub)
	N := len(s)
	d := 26
	q := math.MaxInt64
	var i, j int
	p := 0 // hash value for subtern
	t := 0 // hash value for text
	h := 1 // the value of h would be "pow(d, M-1) % q"
	var ans []int
	// Calculate the value of h as "pow(d, M-1) % q"
	for i = 0; i < M-1; i++ {
		h = (h * d) % q
	}

	// Calculate the hash value of subtern and first window of text
	for i = 0; i < M; i++ {
		p = (d*p + int(sub[i])) % q
		t = (d*t + int(s[i])) % q
	}

	// Slide the subtern over text one by one
	for i = 0; i <= N-M; i++ {

		// Check the hash values of current window of text and subtern
		if p == t {
			// Check characters one by one
			for j = 0; j < M; j++ {
				if s[i+j] != sub[j] {
					break
				}
			}

			// If p == t and subtern matches
			if j == M {
				ans = append(ans, i)
				// fmt.Printf("subtern found at index %d\n", i)
			}
		}

		// Calculate hash value for the next window of text
		if i < N-M {
			t = (d*(t-int(s[i])*h) + int(s[i+M])) % q

			// We might get negative value of t, convert it to positive
			if t < 0 {
				t = (t + q)
			}
		}
	}
	slices.Reverse(ans)
	return ans
}
func main() {}

// func TestFindSubStringWithSuffixArray(t *testing.T) {
// 	assert.Equal(t, FindSubStringWithSuffixArray("Banana", "ana"), []int{3, 1}, "They should be equal")
// }
