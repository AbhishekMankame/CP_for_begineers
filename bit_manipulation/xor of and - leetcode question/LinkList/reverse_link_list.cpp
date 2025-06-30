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
    while (temp != nullptr)
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

int main()
{
    // Creating nodes manually
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original Linked List:\n";
    printList(head);

    // Reverse the list
    Node *newHead = reverseList(head);
    cout << "Reversed Linked List:\n";
    printList(newHead);

    return 0;
}