package main

type node struct {
	value interface{}
	next  *node
	prev  *node
}

type ListBefore struct {
	head *node
	tail *node
}

func (list *ListBefore) push_back(data interface{}) {
	newNode := &node{data, nil, list.tail}
	if list.head == nil {
		list.head = newNode
		return
	}
	list.tail.next = newNode
	list.tail = newNode
}

func (list *ListBefore) push_front(data interface{}) {
	// newNode := &node{data}
}
