package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strings"
	"unicode"
)

// Очередь с использованием generics
type Queue[T any] struct {
	data []T
}

// Создание новой очереди
func NewQueue[T any]() *Queue[T] {
	return &Queue[T]{data: make([]T, 0)}
}

// Добавление элемента в очередь
func (q *Queue[T]) Enqueue(value T) {
	q.data = append(q.data, value)
}

// Удаление и возврат элемента из очереди
func (q *Queue[T]) Dequeue() (T, bool) {
	if len(q.data) == 0 {
		var zero T // Нулевое значение для типа T
		return zero, false
	}
	value := q.data[0]
	q.data = q.data[1:] // Удаляем первый элемент
	return value, true
}

// Проверка, пуста ли очередь
func (q *Queue[T]) IsEmpty() bool {
	return len(q.data) == 0
}

// Получение длины очереди
func (q *Queue[T]) Len() int {
	return len(q.data)
}

// Метод String для получения строкового представления очереди
func (q *Queue[T]) String() string {
	// Создаем срез строк для хранения преобразованных значений
	var result []string

	// Преобразуем каждый элемент очереди в строку
	for _, value := range q.data {
		result = append(result, fmt.Sprintf("%c", value)) // Преобразуем значение в символ
	}

	// Объединяем все элементы в одну строку
	return strings.Join(result, "")
}

// Метод Values для получения всех элементов очереди в виде среза
func (q *Queue[T]) Values() []T {
	return q.data
}

func main() {
	// Открываем файл F для чтения
	fileF, err := os.Open("F.txt")
	if err != nil {
		fmt.Println("Ошибка при открытии файла F:", err)
		return
	}
	defer fileF.Close()

	// Создаем файл G для записи
	fileG, err := os.Create("G.txt")
	if err != nil {
		fmt.Println("Ошибка при создании файла G:", err)
		return
	}
	defer fileG.Close()

	scanner := bufio.NewScanner(fileF)
	writer := bufio.NewWriter(fileG)

	// Обрабатываем каждую строку файла F
	for scanner.Scan() {
		line := scanner.Text()
		digitsQueue := NewQueue[rune]()     // Очередь для цифр
		otherCharsQueue := NewQueue[rune]() // Очередь для остальных символов

		// Разделяем символы на цифры и остальные
		for _, char := range line {
			if unicode.IsDigit(char) {
				digitsQueue.Enqueue(char)
			} else {
				otherCharsQueue.Enqueue(char)
			}
		}

		// Собираем строку из символов, не являющихся цифрами
		newLine := otherCharsQueue.String()

		// Добавляем цифры в конец строки
		newLine += digitsQueue.String()

		// Записываем обработанную строку в файл G
		_, err := writer.WriteString(newLine + "\n")
		if err != nil {
			fmt.Println("Ошибка при записи в файл G:", err)
			return
		}
	}

	// Проверяем, были ли ошибки при сканировании файла F
	if err := scanner.Err(); err != nil {
		fmt.Println("Ошибка при чтении файла F:", err)
		return
	}

	// Сбрасываем буфер записи в файл G
	writer.Flush()

	fmt.Println("Файл успешно обработан. Результат записан в G.txt")

	// Функция для проверки, является ли число простым

	// Создаем очередь и добавляем элементы
	queue := NewQueue[int]()
	data := []int{2, 3, 4, 5, 7, 10}
	for _, element := range data {
		queue.Enqueue(element)
	}

	// Инициализация переменных для суммы, произведения и счетчика простых чисел
	sum := 0
	product := 1
	primeCount := 0

	// Проходим по очереди
	for _, element := range queue.Values() {
		value := element
		sum += value
		product *= value
		if isPrime(value) {
			primeCount++
		}
	}

	// Выводим результаты
	fmt.Printf("Сумма элементов очереди: %d\n", sum)
	fmt.Printf("Произведение элементов очереди: %d\n", product)
	fmt.Printf("Количество простых чисел в очереди: %d\n", primeCount)
}

func isPrime(n int) bool {
	if n < 2 {
		return false
	}
	for i := 2; i <= int(math.Sqrt(float64(n))); i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}
