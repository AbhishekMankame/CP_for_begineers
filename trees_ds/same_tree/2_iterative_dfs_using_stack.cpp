/*
Same Tree using iterative DFS with stack
Here, we use a stack to perform a depth-first traversal of both trees simultaneously. We compare the nodes of both trees at each step. If we find any discrepancy in structure or node values, we conclude that the trees are not the same.

The algorithm works as follows:
1. Initialize a stack and push the root nodes of both trees onto it.
2. While the stack is not empty, pop a pair of nodes from the stack.
3. If both nodes are NULL, continue to the next iteration (they are the same at this position).
4. If one of the nodes is NULL and the other is not, return false (the trees are not the same).
5. If the values of the nodes are different, return false (the trees are not the same).
6. Push the left children of both nodes onto the stack, followed by the right children.
7. If the stack is exhausted without finding any discrepancies, return true (the trees are the same).

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*, TreeNode*>> st; // Stack to store pairs of nodes from both trees
        st.push({p,q}); // Push the root nodes of both trees onto the stack
        while(!st.empty()) {
            auto [node1, node2] = st.top(); // Get the top pair of nodes from the stack
            st.pop(); // Remove the top pair from the stack

            // Both nodes are NULL, continue to the next iteration
            if(node1 == NULL && node2 == NULL) {
                continue;
            }

            // If one of the nodes is NULL and the other is not, return false
            if(node1 == NULL || node2 == NULL) {
                return false;
            }

            // If the values of the nodes are different, return false
            if(node1->val != node2->val) {
                return false;
            }
            // Push the left children of both nodes onto the stack 
            st.push({node1->left,node2->left});

            // Push the right children of both nodes onto the stack
            st.push({node1->right,node2->right});
        }
        return true; // If the stack is exhausted without finding discrepancies, the trees are the same
    }
};

// TC: O(n), where 'n' is the number of nodes in the binary trees. We visit each node once.
// SC: O(h), where 'h' is the height of the binary trees. In the worst case, the stack will contain all the nodes along a path from the root to a leaf node.