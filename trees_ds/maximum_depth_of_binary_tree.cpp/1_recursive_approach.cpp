/* Maximum Depth of Binary Tree
The maximum depth (or height) of a binary tree is the number of nodes along the longest path from the root node to any leaf node.
- The path always starts from the root node and ends at a leaf node (a node with no children).
- The longest such path determines the tree's maximum depth.

Example:

        1
       / \
      2   3
     /
    4
Possible root-to-leaf paths:
1. 1 -> 2 -> 4 (depth = 3)
2. 1 -> 3 (depth = 2)
Maximum depth of the binary tree = 3

Key Observations:
At every node, the maximum depth depends on the deeper of its two subtrees. Therefore, we can use a recursive approach to calculate the maximum depth of the binary tree.

Maximum Depth(node) = 1 + max(Maximum Depth(left subtree), Maximum Depth(right subtree))

where:
- 1 represents the current node.
- max() function is used to find the maximum depth between the left and right subtrees.

Recursive Formula:
if root == NULL:
    return 0
else:
    return 1 + max(leftDepth, rightDepth)

This naturally leads to a DFS solution, where we traverse the tree and calculate the depth of each subtree recursively.

Base Case:
- If the current node is NULL, return 0 (indicating that we've reached beyond a leaf node). Empty tree (NULL) -> Depth = 0
- Leaf Node -> Depth = 1 (since it counts as a node itself)

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Base case: If the current node is NULL, return 0
        if (root == NULL) {
            return 0;
        }
        else {
            // Recursively calculate the depth of the left and right subtrees
            int leftDepth = maxDepth(root->val);
            int rightDepth = maxDepth(root->right);
            // Return the maximum depth between the left and right subtrees, plus 1 for the current node
            return 1 + max(leftDepth, rightDepth);
        }
    }
};

// TC: O(n), where n is the number of nodes in the binary tree. We visit each node once.
// SC: O(h), where h is the height of the binary tree. This space is used by the recursion stack. In worst case (skewed tree), the height can be n, leading to O(n) space complexity. In a balanced tree, the height is log(n), leading to O(log(n)) space complexity.