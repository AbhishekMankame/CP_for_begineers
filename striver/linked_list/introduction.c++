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

/*
## Understanding Pointers
A pointer is a variable that stores the memory address of another variable. In simpler terms, it "points" to the location in memory where data is stored.
This allows you to indirectly access and manipulate data by referring to its memory address.

Java does not explicitly use pointers or take the address of variables as you do in C++. Instead, we hjave reference variables. These reference variables do not directly contain memory addresses like pointers in languages such as C or C++. Instead, they hold references to objects in memory.

Understanding the difference between Node and Node*: A node refers to the structure that contains data and the pointer to the next node.
In contrast, Node* (Node Pointer) specifically denotes a pointer variable that stored the address of the Node it is pointing to.

*/

/*
## Memory Space:
Let's talk about assuming the data stored is integer. Another main difference between an array and a linked list is the memory used.
In the case of an array, we are storing integers that consume 4 Bytes for every int, whereas in a linked list, we are storing data and a pointer at every node, so the memory used up will depend on the configuration of the system.

32 Bit System --> Int - 4 Bytes | Pointer - 4 Bytes | Overall - 8 Bytes
64 Bit System --> Int - 4 Bytes | Pointer - 8 Bytes | Overall - 12 Bytes

Therefore, in the case of a 64 Bit system, it occupies or consumes more space than a 32 Bit system.


*/

/*
## Applications of Linked List:
- Creating Data Structures: Linked lists serve as the foundation for building other dynamic data structures, such as stacks and queues.
- Dynamic Memory Allocation: Dynamic memory allocation relies on linked lists to manage and allocate memory blocks efficiently.
- Web Browser is one important application of Linked List.

*/