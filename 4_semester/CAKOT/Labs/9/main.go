package main

import "fmt"

type vertexInfo struct {
	vertex          int
	currentDistance int
	visited         map[int]bool
	d               int
	graph           map[int][]int
}

func dfs(info vertexInfo) []int {
	if info.currentDistance == info.d {
		return []int{info.vertex}
	}
	if info.currentDistance > info.d {
		return nil
	}
	info.visited[info.vertex] = true
	var result []int
	for _, neighbor := range info.graph[info.vertex] {
		if !info.visited[neighbor] {
			newInfo := vertexInfo{
				vertex:          neighbor,
				currentDistance: info.currentDistance + 1,
				visited:         info.visited,
				d:               info.d,
				graph:           info.graph,
			}
			res := dfs(newInfo)
			result = append(result, res...)
		}
	}
	return result
}

// Функция для поиска существенных вершин
func findEssentialVertices(graph map[int][]int, start, end int) map[int]bool {
	visited := make(map[int]bool)
	essential := make(map[int]bool)

	var dfs func(current int)
	dfs = func(current int) {
		// Если вершина уже посещена, выходим
		if visited[current] {
			return
		}
		// Помечаем вершину как посещенную
		visited[current] = true

		// Если текущая вершина совпадает с конечной, помечаем её как существенную
		if current == end {
			essential[current] = true
			return
		}

		// Рекурсивно обходим соседние вершины
		for _, neighbor := range graph[current] {
			dfs(neighbor)
			// Если соседняя вершина является существенной, то текущая тоже существенная
			if essential[neighbor] {
				essential[current] = true
			}
		}
	}

	// Запускаем DFS из начальной вершины
	dfs(start)

	return essential
}

func findVerticesAtDistance(graph map[int][]int, startVertex int, d int) []int {
	visited := make(map[int]bool)
	info := vertexInfo{
		vertex:          startVertex,
		currentDistance: 0,
		visited:         visited,
		d:               d,
		graph:           graph,
	}
	return dfs(info)
}

func findArticulationPoints(graph map[int][]int, n int) []int {
	visited := make([]bool, n)
	tin := make([]int, n)
	low := make([]int, n)
	isArticulation := make([]bool, n)
	timer := 0
	articulationPoints := []int{}

	var dfs func(int, int)
	dfs = func(v, p int) {
		visited[v] = true
		tin[v] = timer
		low[v] = timer
		timer++
		children := 0

		for _, to := range graph[v] {
			if to == p {
				continue
			}
			if visited[to] {
				low[v] = min(low[v], tin[to])
			} else {
				dfs(to, v)
				low[v] = min(low[v], low[to])
				if low[to] >= tin[v] && p != -1 {
					isArticulation[v] = true
				}
				children++
			}
		}

		if p == -1 && children > 1 {
			isArticulation[v] = true
		}
	}

	for i := 0; i < n; i++ {
		if !visited[i] {
			dfs(i, -1)
		}
	}

	for i := 0; i < n; i++ {
		if isArticulation[i] {
			articulationPoints = append(articulationPoints, i)
		}
	}

	return articulationPoints
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	graph := map[int][]int{
		0: {1, 2},
		1: {0, 3, 4},
		2: {0, 5},
		3: {1},
		4: {1, 6},
		5: {2},
		6: {4},
	}

	startVertex := 0
	d := 2

	verticesAtDistanceD := findVerticesAtDistance(graph, startVertex, d)
	fmt.Println(verticesAtDistanceD) // Вывод: [3 4 5]
	// Пример графа в виде списка смежности
	graph = map[int][]int{
		0: {1},
		1: {2},
		2: {3},
		3: {4},
		4: {0},
	}

	start := 0
	end := 4

	// Находим существенные вершины
	essentialVertices := findEssentialVertices(graph, start, end)

	// Выводим результат
	fmt.Println("Существенные вершины:")
	for vertex := range essentialVertices {
		fmt.Println(vertex)
	}

	// Пример графа в виде списка смежности
	graph = map[int][]int{
		0: {1, 2},    // 0
		1: {0, 2, 3}, // 1
		2: {0, 1},    // 2
		3: {1, 4},    // 3
		4: {3},       // 4
	}

	n := len(graph)
	articulationPoints := findArticulationPoints(graph, n)
	fmt.Println("Точки сочленения:", articulationPoints)
}
