#pragma once

#include "Node.h"

class LinkedList
{
    // make it mem allocated and also cyclical
    // insertion sort
    Node *head, *tail;
    
public:
    int count;
    
    // Default Constructor
    LinkedList()
    {
        count = 0;
        head = nullptr;
        tail = nullptr;
    }

    int& operator [](int index) const;

    int get(int index) const;
    void add(int value);
    void insert(int index, int value);
    void remove(int index);
    void remove(Node* node);
    void sort();
    void print_list() const;
};

inline int& LinkedList::operator[](int index) const
{
    int value = get(index);
    return value;
}


inline int LinkedList::get(int index) const
{
    if(index < 0 || index >= count)
    {
        cout << "Index out of range" << endl;
        return -1;
    }
    
    if(index == 0) return head->Value;
    if(index == count - 1) return tail->Value;

    int current_node_index = 0;
    Node* current_node = head;
    
    while (current_node_index < index)
    {
        current_node_index++;
        current_node = current_node->Next;
    }

    return current_node->Value;
}

inline void LinkedList::add(int value)
{
    if(head == nullptr)
    {
        head = new Node(value);
        tail = head;
        count++;
        return;
    }

    tail->Next = new Node(value);
    tail = tail->Next;
    count++;
}


inline void LinkedList::insert(int index, int value)
{
    count++; // increase count of the node

    if(head == nullptr)
    {
        head = new Node(value);
        tail = head;
        return;
    }
    
    if(index == 0)
    {
        // Create Node
        Node* next_node = head;
        head = new Node(value);
        head->Next = next_node;

        if(count == 2) tail = next_node;
        
        return;
    }

    // Find node just before wanted node;
    Node* prev_node = head;
    for (int i = 1; i <= index - 1; i++)
    {
        prev_node = prev_node->Next;
    }
    
    Node* next_node = prev_node->Next; // Get the next node of the prevNode
    prev_node->Next = new Node(value); // reference the new node as next in the previous node
    prev_node->Next->Next = next_node; // set new node's next Node Pointer as the next node found.

    if(next_node == nullptr) // previous node was last in list
    {
        tail = prev_node->Next;
    }
}

inline void LinkedList::sort()
{
    Node* current_node = head->Next; // check the next node from the head to start

    while (current_node->Next != nullptr)
    {
        Node* prev_node = head->Prev;
    }
}

inline void LinkedList::print_list() const
{
    const Node* n = head;
    while (n != nullptr)
    {
        std::cout << n->Value << endl;
        n = n->Next;
    }
}





