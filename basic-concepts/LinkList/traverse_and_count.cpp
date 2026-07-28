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
    Node *head = new Node(11);
    head->next = new Node(22);
    head->next->next = new Node(33);

    // Count nodes
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        count++;
        temp = temp->next;
    }
    cout << "\nTotal nodes: " << count << endl;
    return 0;
}