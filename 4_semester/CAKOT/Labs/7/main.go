package main

import (
	"fmt"
)

// Функция для проверки связности графа
func isConnected(adjMatrix [][]int) bool {
	n := len(adjMatrix) // Количество вершин
	visited := make([]bool, n)

	// BFS для проверки достижимости всех вершин
	queue := []int{0} // Начинаем с первой вершины
	visited[0] = true

	for len(queue) > 0 {
		current := queue[0]
		queue = queue[1:]

		for i := 0; i < n; i++ {
			if adjMatrix[current][i] == 1 && !visited[i] {
				visited[i] = true
				queue = append(queue, i)
			}
		}
	}

	// Проверяем, все ли вершины были посещены
	for _, v := range visited {
		if !v {
			return false
		}
	}
	return true
}

func main() {
	// Пример матрицы смежности для неориентированного графа
	adjMatrix := [][]int{
		{0, 1, 0, 0},
		{1, 0, 1, 1},
		{0, 1, 0, 0},
		{0, 1, 0, 0},
	}

	if isConnected(adjMatrix) {
		fmt.Println("Граф связный")
	} else {
		fmt.Println("Граф несвязный")
	}
}
