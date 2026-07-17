/*
Tree Traversal:
Tree traversal is the proecss of visiting every node in a tree exactly once in a specified order.
For binary trees, traversals are classified into Depth-First Traversal (DFS) and Breadth-First Traversal (BFS).

1. Depth-First Traversal (DFS):
There are three DFS traversal methods.

a. Preorder Traversal (Root -> Left -> Right)
Preorder traversal is a depth-first traversal technique in which the root node is visited first, followed by the left subtree, and then right subtree.

Order: Root --> Left --> Right

b. Inorder Traversal (Left -> Root -> Right)
Inorder traversal is a DFS technique in which the left subtree is visited first, then the root node, and finally the right subtree.

Order: Left --> Root --> Right

c. Postorder Traversal (Left -> Right -> Root)
Postorder traversal is a DFS travesal technique in which the left subtree is visited first, followed by the right subtree, and the root node is visited last.

Order: Left --> Right --> Root

2. Breadth-First Traversal (Level Order)
Nodes are visited level from left to right using a queue.

*/

#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Preorder Traversal (Root -> Left -> Right)
void preorder(Node* root){
    if(root==nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorder(Node* root){
    if(root==nullptr)
        return;

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorder(Node* root){
    if(root==nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level Order Traversal (Breadth-First Traversal)
void levelOrder(Node* root){
    if(root==nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if(current->left!=nullptr){
            q.push(current->left);
        }

        if(current->right!=nullptr){
            q.push(current->right);
        }
    }
}