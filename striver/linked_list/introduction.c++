#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
}

/* 

## What is a Linked List?

Imagine you are given a task where you have to maintain a data entry of cars entering a parking lot. Since the number ofr cars entering will be different and may change daily, constructing a fixed-size data structure like an array might not be helpful.
This is when linked list come into the picture, which allows us to add and remove cars easily. Linked List is a linear data structure that can be visualized as a chain with different nodes connected, where each node represents different element.
The difference between arrays and linked list is that, unlike arrays, the elements are not stored in the contiguous location.

For any element to be added in an array, we need the exact next memory location to be empty and it is impossible to guarantee that it is possible. Hence adding elements to an array is not possible after the initial assignment of size.

Imp: A linked list is a data structure containing two crucial pieces of information, the first being the data and the other being the pointer to the next element. The 'head' is the first node, and the 'tail' is the last node in a linked list.


*/