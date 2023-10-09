## Problem Statement :
Create binary search tree and implement preorder, inorder and postorder traversal non recursively in C.

## Tree :
    A tree data structure is a hierarchical structure that is used to represent and organize data in a way 
    that is easy to navigate and search. It is a collection of nodes that are connected by edges and has a 
    hierarchical relationship between the nodes. 

    The topmost node of the tree is called the root, and the nodes below it are called the child nodes. 
    Each node can have multiple child nodes, and these child nodes can also have their own child nodes, 
    forming a recursive structure.

## Binary Search Tree :
Binary Search Tree is a node-based binary tree data structure which has the following properties:

+ The left subtree of a node contains only nodes with keys lesser than the node’s key.
+ The right subtree of a node contains only nodes with keys greater than the node’s key.
+ The left and right subtree each must also be a binary search tree.

### Traversal :
+ Preorder Traversal: At first visit the root then traverse left subtree and then traverse the right subtree.
+ Inorder Traversal: At first traverse left subtree then visit the root and then traverse the right subtree.
+ Postorder traversal: At first traverse left subtree then traverse the right subtree and then visit the root.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/e0e8ba2d-3a5e-41c7-b821-d964186d22a3)

    Output: 
    Inorder Traversal: 10 20 30 100 150 200 300
    Preorder Traversal: 100 20 10 30 200 150 300
    Postorder Traversal: 10 30 20 150 300 200 100
