// Linked list 
/*
In linked list, memory is created on the fly.

*/

#include<iostream>
using namespace std;

class Node {
    int data;
    Node* next;

public:
    Node(int d):data(d),next(NULL) {}   // this is known as initialization list

};

class List {
    Node * head;
    Node * tail;

public:
    List():head(NULL),tail(NULL){}

    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }
        else {
            Node * n = new Node(data);
            n->next = head;
            head=n;
        }
    }
}