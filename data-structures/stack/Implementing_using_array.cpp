#include <iostream>
using namespace std;

class Stack
{
    int arr[5];   // fixed size
    int topIndex; // keeps track of top

public:
    Stack()
    {
        topIndex = -1;
    }

    void push(int x)
    {
        if (topIndex == 4) // overflow
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    int top()
    {
        if (topIndex == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool empty()
    {
        return topIndex == -1;
    }
};