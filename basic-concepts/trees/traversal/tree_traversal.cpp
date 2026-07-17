#include<iostream>
#include<queue>

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