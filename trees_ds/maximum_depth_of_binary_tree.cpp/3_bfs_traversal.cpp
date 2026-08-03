// Maximum depth of binary tree using BFS with queue (Level Order Traversal)
// The idea is to traverse the tree level by level and count the number of levels, which corresponds to the maximum depth of the tree.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0; // If the tree is empty, the maximum depth is 0
        }
        queue<TreeNode*> q; // Queue to perform level order traversal
        q.push(root); // Start with the root node
        int depth = 0; // Variable to keep track of the current depth
        while(!q.empty()){
            int size = q.size(); // Get the number of nodes at the current level
            depth++; // Increment the depth for each level processed
            for(int i = 0; i < size; i++) {
                TreeNode* node = q.front(); // Get the front node in the queue
                q.pop(); // Remove the front node from the queue
                if(node->left) {
                    q.push(node->left); // Add the left child to the queue if it exists
                }
                if(node->right) {
                    q.push(node->right); // Add the right child to the queue if it exists
                }
            }
        }
        return depth; // Return the maximum depth found
    }
};

// TC: O(n), where n is the number of nodes in the binary tree. We visit each node once.
// SC: O(w), where w is the maximum width of the binary tree. In the worst case, the queue will contain all the nodes at the widest level of the tree.
// SC in worst case can be O(n) for a complete binary tree, where the last level can have upto n/2 nodes. In a skewed tree, the maximum width can be 1, leading to O(1) space complexity.