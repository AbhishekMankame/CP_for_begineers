#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // Stores data
    Node *next; // Pointer to the next node

    // Constructor
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    // Create individual nodes
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // Link nodes
    first->next = second;
    second->next = third;

    // Print the linked list
    Node *temp = first;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}