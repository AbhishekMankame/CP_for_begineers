// Linked List

/* 
What is a Linked List?
Imagine you are given a task where you have to maintain a data entry of cars entering a parking lot.
Since the number of cars entering will be different and may change daily, constructing a fixed-sized data structure like an array might not be helpful.
This is when linked lists come into the picture, which allows us to add and remove cars easily.
Linked List is a linear data structure that can be visualized as a chain with different nodes connected, where each node represents a different elements.
The difference between arrays and linked list is that, unlike arrays, the elements are not stored at contiguous location.

For any elements to be added in an array, we need the exact next memory location to be empty and it is impossible to guarantee that it is possible. Hence adding elements to an array is not possible after the initial assignment of size.

A linked list is a data structure containing two crucial pieces of information, the first being the data and the other being the pointer to the next element.
The 'head' is the first node, and the 'tail' is the last node in a linked list.

*/

/*
Creating a Linked List:
These are two information sets to store at every node, thus there is need to create a self-defined data types to handle them. Therefore, we will use the help of structs and classes.

*/

#include<bits/stdc++.h>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data;   // Data value
    Node *next; // Pointer to the next node

    // Constructor with data and next
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    // Constuctor with only data
    Node(int data1) {
        data=data1;
        next=nullptr;
    }
};

int main() {
    // Create an array
    vector<int> arr = {2,5,8,7};

    // Create first node
    Node* y = new Node(arr[0]);
    cout<<y<<'\n';

    // Print data stored in node
    cout<<y->data <<'\n';

    return 0;
}

/*
Let's break the above example to understand how it works:
- The class has two types: data which contains the value of the node and a pointer next, which points to the next node in the list.
- There is a constructor which assigns the value to a new node.
- A new keyword is used to dynamically allocate memory to a node with data as arr[0].

*/