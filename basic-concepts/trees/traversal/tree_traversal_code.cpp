#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root) {
    if(root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if(current->left!=nullptr) {
            q.push(current->left);
        }
        if(current->right!=nullptr) {
            q.push(current->right);
        }
    }
}

int main() {
    // Creating the tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Preorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nLevel Order: ";
    levelOrder(root);

    return 0;
}

/*
Output:
Preorder: 1 2 4 5 3 6
Inorder: 4 2 5 1 3 6
Postorder: 4 5 2 6 3 1
Level Order: 1 2 3 4 5 6

Summary Table:
| Operation     | Time Complexity | Auxiliary Space     |
| ------------- | --------------- | ------------------- |
| Tree Creation | O(n)            | O(n) (tree storage) |
| Preorder      | O(n)            | O(h)                |
| Inorder       | O(n)            | O(h)                |
| Postorder     | O(n)            | O(h)                |
| Level Order   | O(n)            | O(n)                |


*/