// Dynamic Array-based Stack Implementation

#include <iostream>
using namespace std;

class Stack
{
    int *arr;     // dynamically allocated array
    int capacity; // maximum size of stack
    int topIndex; // index of top element

public:
    // Constructor
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    // Destructor
    ~Stack()
    {
        delete[] arr;
    }

    // Push operation
    void push(int x)
    {
        if (topIndex == capacity - 1)
        {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        arr[++topIndex];
    }

    // Pop operation
    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack Underflow! Cannot pop. \n";
            return;
        }
        topIndex--;
    }

    // Get top element
    int top()
    {
        if (topIndex == -1)
        {
            cout << "Stack is empty!";
            return -1; // or throws an exception
        }
        return arr[topIndex];
    }

    // Check if empty
    bool empty()
    {
        return topIndex == -1;
    }

    // Get size of stack
    int size()
    {
        return topIndex + 1;
    }
};