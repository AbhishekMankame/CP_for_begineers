/* Linked List --> Linked List is a dynamic data structure made up of nodes, where each node contains:
- Some data
- A pointer to the next node
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
};

int main()
{

    return 0;
}