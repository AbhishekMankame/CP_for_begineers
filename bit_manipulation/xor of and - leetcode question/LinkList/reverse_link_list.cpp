#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != head)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to reverse the linked list
Node *reverseList(Node *head)
{
    Node *prev = nullptr;
    Node *curr = head;

    while (curr != nullptr)
    {
        Node *next = curr->next; // store next node
        curr->next = prev;       // reverse current node's pointer
        prev = curr;             // move prev forward
        curr = next;             // move curr forward
    }
    return prev; // new head of reversed list
}