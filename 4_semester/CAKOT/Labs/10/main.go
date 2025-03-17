package main

// 6, 2

import (
	"fmt"
)

// Функция для обхода графа в глубину (DFS)
func dfs(graph map[int][]int, visited map[int]bool, node int) {
	visited[node] = true
	for _, neighbor := range graph[node] {
		if !visited[neighbor] {
			dfs(graph, visited, neighbor)
		}
	}
}

// Функция для проверки, является ли граф деревом
func isTree(n int, edges [][]int) bool {
	// Создаем граф в виде списка смежности
	graph := make(map[int][]int)
	for _, edge := range edges {
		u, v := edge[0], edge[1]
		graph[u] = append(graph[u], v)
		graph[v] = append(graph[v], u)
	}

	// Проверяем количество ребер
	if len(edges) != n-1 {
		return false
	}

	// Проверяем связность графа с помощью DFS
	visited := make(map[int]bool)
	dfs(graph, visited, 1) // Начинаем обход с первой вершины

	// Проверяем, все ли вершины были посещены
	for i := 1; i <= n; i++ {
		if !visited[i] {
			return false
		}
	}

	return true
}

// Функция для выполнения DFS и построения остовного дерева
func dfs2(graph map[int][]int, vertex int, visited map[int]bool, spanningTree *[][]int, removedEdges *[][]int) {
	visited[vertex] = true
	for _, neighbor := range graph[vertex] {
		if !visited[neighbor] {
			// Добавляем ребро в остовное дерево
			*spanningTree = append(*spanningTree, []int{vertex, neighbor})
			dfs2(graph, neighbor, visited, spanningTree, removedEdges)
		} else {
			// Проверяем, не добавлено ли ребро в остовное дерево ранее
			isInSpanningTree := false
			for _, edge := range *spanningTree {
				if (edge[0] == vertex && edge[1] == neighbor) || (edge[0] == neighbor && edge[1] == vertex) {
					isInSpanningTree = true
					break
				}
			}
			if !isInSpanningTree {
				// Добавляем ребро в список удаленных ребер
				*removedEdges = append(*removedEdges, []int{vertex, neighbor})
			}
		}
	}
}

func main() {
	// Примеры графов
	tests := []struct {
		n     int
		edges [][]int
	}{
		{4, [][]int{{1, 2}, {1, 3}, {1, 4}}},         // Дерево
		{4, [][]int{{1, 2}, {2, 3}}},                 // Не дерево (не связный граф)
		{5, [][]int{{1, 2}, {2, 3}, {3, 4}, {4, 5}}}, // Дерево
		{3, [][]int{{1, 2}, {2, 3}, {1, 3}}},         // Не дерево (цикл)
	}

	for i, test := range tests {
		fmt.Printf("Тест %d: ", i+1)
		if isTree(test.n, test.edges) {
			fmt.Println("Граф является деревом.")
		} else {
			fmt.Println("Граф не является деревом.")
		}
	}
	// Пример графа в виде списка смежности
	graph := map[int][]int{
		0: {1, 2},
		1: {0, 2, 3},
		2: {0, 1, 3},
		3: {1, 2, 4},
		4: {3},
	}

	// Инициализация переменных
	visited := make(map[int]bool)
	var spanningTree [][]int
	var removedEdges [][]int

	// Запуск DFS с начальной вершиной 0
	dfs2(graph, 0, visited, &spanningTree, &removedEdges)

	// Вывод результатов
	fmt.Println("Остовное дерево:")
	for _, edge := range spanningTree {
		fmt.Printf("%d - %d\n", edge[0], edge[1])
	}

	fmt.Println("\nУдаленные ребра:")
	for _, edge := range removedEdges {
		fmt.Printf("%d - %d\n", edge[0], edge[1])
	}
}
