/*
Recursive approach to find the diameter of a binary tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
This path may or may not pass through the root.
The diameter of a binary tree can be computed as the maximum value of (left_depth + right_depth) for each node, where left_depth and right_depth are the depths of the left and right subtrees of that node.

The recursive function calculates the depth of each subtree and updates the diameter accordingly.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; // Initialize the diameter to 0
        depth(root, diameter); // Call the helper function to calculate depth
        return diameter; // Returnt the final diameter value
    }

    int depth(TreeNode* node, int &diameter) {
        if(node == NULL) {
            return 0; // If the node is NULL, return depth as 0

            int leftDepth = depth(node->left, diameter); // Recursively calculate the depth of the left subtree
            int rightDepth = depth(node->right, diameter); // Recursively calculate the depth of the right subtree
            diameter = max(diameter, leftDepth + rightDepth); // Update the diameter if the current path is longer
            return 1 + max(leftDepth, rightDepth); // Return the depth of the current node
        }
    }
};

// TC: O(n), where n is the number of nodes in the binary tree. We visit each node once.
// SC: O(h), where h is the height of the binary tree. In the worst case, the recursion stack will contain all the nodes along a path from the root to a leaf node.
// A balanced binary tree has a height of log(n), leading to O(log(n)) space complexity, while a skewed tree has a height of n, leading to O(n) space complexity.
