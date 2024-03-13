#pragma once

#include <iostream>
using namespace std;

class Node
{
    public:
        int Value;
        Node* Next;
        Node* Prev;

        // Default Constructor
        Node()
        {
            Value = NULL;
            Next = nullptr;
            Prev = nullptr;
        }

        // Parameterized Constructor
        Node(int data)
        {
            Value = data;
            Next = nullptr;
            Prev = nullptr;
        }

        // Parameterized Constructor
        Node(int data, Node* prev, Node* next)
        {
            Value = data;
            Next = nullptr;
            Prev = nullptr;
        }
};
