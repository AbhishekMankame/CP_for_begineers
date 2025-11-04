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

    void push_front(int val) {
        Node* newNode = new Node(val); // dynamic
        // Node newNode(val); // static  --> yeh bhi ek alternate method hai
        // Static implementation, function call se jaise hi function se hum bahar aayenge toh data delete ho jaayega

        if(head==NULL){
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head; // this is same as (*newNode).next = head
            head = newNode;
        }
    }

    void printLL() {
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    return 0;
}

