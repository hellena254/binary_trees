# Binary Trees Project
The following project covers the consept of binary trees. It was done by:

   1. [Nana Olivia](https://github.com/nanaoliviane)
   2. [Hellen Atieno](https://github.com/hellena254)
    
## What is a Binary Tree?

A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child. The topmost node is called the root, and nodes with no children are called leaves. Nodes that are not leaves have a parent.

The structure of a binary tree facilitates efficient search, insertion, and deletion operations.

## Difference between a Binary Tree and a Binary Search Tree (BST)

A Binary Search Tree (BST) is a specific type of binary tree with an additional property: for each node, all elements in its left subtree are less than or equal to the node's value, and all elements in its right subtree are greater than the node's value. This ordering property makes searching for elements in a BST more efficient compared to a general binary tree.

## Gain in Time Complexity Compared to Linked Lists

In terms of time complexity, binary trees can offer advantages over linked lists for certain operations. Searching, inserting, and deleting elements in a balanced binary search tree have an average time complexity of O(log n), where n is the number of elements. In contrast, linked lists have a linear time complexity of O(n) for these operations. However, it's essential to note that the advantages of binary trees are more pronounced when the tree is balanced.

## Depth, Height, and Size of a Binary Tree

- **Depth**: The depth of a node in a binary tree is the number of edges on the path from the root to that node. The depth of the root is 0.

- **Height**: The height of a binary tree is the length of the longest path from the root to a leaf. It represents the depth of the deepest node. An empty tree has a height of -1.

- **Size**: The size of a binary tree is the total number of nodes in the tree.

## Traversal Methods in Binary Trees

Traversal is the process of visiting all the nodes in a tree and performing an operation at each node. There are three main traversal methods for binary trees:

1. **Pre-order Traversal**: Visit the current node, then recursively traverse the left and right subtrees.

2. **In-order Traversal**: Recursively traverse the left subtree, visit the current node, then recursively traverse the right subtree. In a BST, this results in a sorted order of elements.

3. **Post-order Traversal**: Recursively traverse the left and right subtrees, then visit the current node.

## Types of Binary Trees

### Complete Binary Tree
A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as left as possible.

### Full Binary Tree
A full binary tree is a binary tree in which every node has either 0 or 2 children.

### Perfect Binary Tree
A perfect binary tree is a binary tree in which all interior nodes have two children, and all leaves have the same depth.

### Balanced Binary Tree
A balanced binary tree is a binary tree in which the depth of the two subtrees of any node differs by at most one.

These types of binary trees have specific characteristics that make them useful for various applications and operations.


*Happy Learning.*
