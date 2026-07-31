/*
Same Tree
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: If both nodes are NULL, they are the same
        if(p == NULL && q == NULL) {
            return true;
        }

        // If one of the nodes is NULL and the other is not, they are not the same
        if(p == NULL || q == NULL) {
            return false;
        }

        // If the values of the current nodes are different, they are not the same
        if(p->val != q->val) {
            return false;
        }
        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

    }
};

// TC: O(n), where 'n' is the number of nodes in the binary trees. We visit each node once.
// SC: O(h), where 'h' is the height of the binary trees. In the worst case, the recursion stack will contain all the nodes along a path from the root to a leaf node.