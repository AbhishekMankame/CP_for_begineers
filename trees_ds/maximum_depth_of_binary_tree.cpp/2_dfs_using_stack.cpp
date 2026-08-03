// Maximum depth of binary tree using DFS with stack

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        stack<pair<TreeNode*, int>> st; // Stack to store the pairs of nodes and their corresponding depths
        st.push({root, 1}); // Push the root node with depth 1 onto the stack
        int ans = 0; // Variable to keep track of the maximum depth encountered
        while(!st.empty()) {
            // Pop the top element from the stack
            auto [node, depth] = st.top(); // Set the current node and its depth
            st.pop(); // Remove the top element from the stack
            ans = max(ans, depth); // Update the maximum depth if the current depth is greater

            // If the current node has a left child, push it onto the stack with depth incremented by 1
            if(node->left) {
                st.push({node->left, depth + 1});
            }
            // If the current node has a right child, push it onto the stack with depth incremented by 1
            if(node->right) {
                st.push({node->right, depth + 1});
            }
        }
        return ans; // Return the maximum depth found
    }
    
};

// TC: O(n), where n is the number of nodes in the binary tree. We visit each node once.
// SC: O(h), where h is the height of the binary tree. In the worst case, the stack will contain all the nodes along a path from the root to a leaf node.