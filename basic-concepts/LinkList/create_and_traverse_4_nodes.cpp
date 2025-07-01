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

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(3);
    Node *c = new Node(5);
    Node *d = new Node(7);

    a->next = b;
    b->next = c;
    c->next = d;

    // Print all nodes
    Node *temp = a;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}