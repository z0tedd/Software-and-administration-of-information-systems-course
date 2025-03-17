package main

import (
	"fmt"
)

// Graph представляет граф в виде списков смежности
type Graph struct {
	AdjacencyList map[int][]int
}

// NewGraph создает новый граф
func NewGraph() *Graph {
	return &Graph{AdjacencyList: make(map[int][]int)}
}

// AddEdge добавляет ребро в граф
func (g *Graph) AddEdge(u, v int) {
	g.AdjacencyList[u] = append(g.AdjacencyList[u], v)
	g.AdjacencyList[v] = append(g.AdjacencyList[v], u)
}

// FindCuts находит все разрезы графа
func (g *Graph) FindCuts() {
	vertices := make([]int, 0, len(g.AdjacencyList))
	for v := range g.AdjacencyList {
		vertices = append(vertices, v)
	}

	n := len(vertices)
	for mask := 1; mask < (1 << n); mask++ { // Перебираем все возможные разбиения
		P1, P2 := []int{}, []int{}
		for i := 0; i < n; i++ {
			// fmt.Println("DEBUG: ", mask&(1<<i))
			if mask&(1<<i) != 0 {
				P1 = append(P1, vertices[i])
			} else {
				P2 = append(P2, vertices[i])
			}
		}

		// Находим разрез для текущего разбиения
		cut := make(map[[2]int]bool)
		for _, u := range P1 {
			for _, v := range g.AdjacencyList[u] {
				if contains(P2, v) {
					edge := [2]int{u, v}
					if edge[0] > edge[1] {
						edge[0], edge[1] = edge[1], edge[0]
					}
					cut[edge] = true
				}
			}
		}

		// Выводим разрез
		fmt.Printf("P1: %v, P2: %v -> Cut: ", P1, P2)
		for edge := range cut {
			fmt.Printf("(%d-%d) ", edge[0], edge[1])
		}
		fmt.Println()
	}
}

// contains проверяет, содержится ли элемент в массиве
func contains(arr []int, val int) bool {
	for _, v := range arr {
		if v == val {
			return true
		}
	}
	return false
}

func main() {
	// Создаем граф
	graph := NewGraph()
	graph.AddEdge(1, 2)
	graph.AddEdge(1, 3)
	graph.AddEdge(2, 3)
	// graph.AddEdge(3, 4)
	// graph.AddEdge(4, 1)
	// graph.AddEdge(2, 4)

	// Находим все разрезы
	graph.FindCuts()
}
