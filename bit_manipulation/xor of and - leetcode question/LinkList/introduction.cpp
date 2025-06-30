#include <iostream>
using namespace std;

class Node
{
    int data;   // Stores data
    Node *next; // Pointer to the next node

    // Constructor
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};