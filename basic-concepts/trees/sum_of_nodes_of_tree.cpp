/*
Sum of Nodes of a Binary Tree
- The sum of nodes of a binary tree is the total obtained by adding the value stored in every node of the binary tree.

Formula: Sum = ∑ (value of each node)

For example:

        10
       /  \
      20   30
     / \     \
    40 50     60

    Sum = 10 + 20 + 30 + 40 + 50 + 60 = 210

Description:
The sum of all nodes can be calculated using recursion.

Algorithm:
1. If the tree is empty (root==NULL), return 0.
2. Recursively find the sum of the left subtree.
3. Recursively find the sum of the right subtree.
4. Return root -> data + leftSum + rightSum

Time Complexity:
- O(n), where 'n' is the number of nodes.
- Everynode is visited exactly once.

Space Complexity:
- O(h), where 'h' is the height of the tree (recursively call stack).
    - Worst case: O(n) (skewed tree)
    - Balanced tree: O(log n)

*/

#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = value;
        left = right = NULL;
    }
};

// Function to calculate sum of all nodes
int sumOfNodes(Node* root){
    if(root==NULL) return 0;

    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

int main() {
    // Creating the tree
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);

    cout << "Sum of all nodes = " << sumOfNodes(root);

    return 0;
}