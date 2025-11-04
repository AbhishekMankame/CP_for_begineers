#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
    // The above is an individual node class
    
    // Note: Kisi bhi ek linked list ke liye, 2 special chize hai joh store honi chahiye: Head Pointer and tail pointer
};

class List {
    Node* head; // Note: Joh bhi values public ya protected declare kiya hai, woh saare ke saare private member hoti hai
    Node* tail;

public:
    List() {    // this will be non parameterized constructor: isme koi parameter nahi aayegi
        head = tail = NULL;
    }
};