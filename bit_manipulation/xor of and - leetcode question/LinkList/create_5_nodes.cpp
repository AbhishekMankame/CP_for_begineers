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
    Node *a = new Node(11);
    Node *b = new Node(22);
    Node *c = new Node(33);
    Node *d = new Node(44);
    Node *e = new Node(55);

    a->next = b;
    b->next = c;
    // b->next = nullptr; // Here the output will be 11 -> 22 -> NULL
    c->next = d;
    d->next = e;

    Node *temp = a;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}