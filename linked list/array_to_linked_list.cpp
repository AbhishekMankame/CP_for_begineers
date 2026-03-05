#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){ // Node* --> Pointer to the head, we will be returning
    Node* head = new Node(arr[0]); // As we have multi constructor, need not to pass nullptr
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        // We need to know that mover has to go front (or to the next)
        mover=temp; // or mover=mover.next
    }
    return head;
}

int main() {
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data;

    // Traversing Linked List
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Time Complexity: O(N) --> As we traversed through all the element