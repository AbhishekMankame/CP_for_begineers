#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int>& arr){
    if(arr.empty()) return nullptr; // handle empty array

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* insertHead(Node* head, int val){
    Node* temp=new Node(val,head);
    return temp;
}

int main() {
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    head = insertHead(head,100);
    print(head);
}