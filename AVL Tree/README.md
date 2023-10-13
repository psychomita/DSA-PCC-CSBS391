## Problem Statement :
Write a program to implement AVL tree with suitable operations in C.

## AVL Tree :
An AVL tree defined as a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees for any node (balance factor of the node) cannot be more than one.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/dba9fd8f-e821-44de-a68d-bc2b84edf485)

## Maximum & Minimum number of Nodes :
Maximum number of nodes = 2<sup>H+1</sup>  – 1

Minimum number of nodes of height H = min no of nodes of height (H-1) + min no of nodes of height (H-2) + 1

where :

H(0)=1

H(1)=2

## Insertion in AVL Tree :
To make sure that the given tree remains AVL after every insertion, we must augment the standard BST insert operation to perform some re-balancing. 
Following are two basic operations that can be performed to balance a BST without violating the BST property (keys(left) < key(root) < keys(right)). 

+ Left Rotation 
+ Right Rotation

T1, T2 and T3 are subtrees of the tree, rooted with y (on the left side) or x (on the right side)           
     
         y                               x    
        / \     Right Rotation          /  \   
       x   T3   - - - - - - - >        T1   y   
      / \       < - - - - - - -            / \ 
     T1  T2     Left Rotation            T2  T3
 
Keys in both of the above trees follow the following order :

    keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)

So BST property is not violated anywhere.

## Deletion in AVL Tree :
To make sure that the given tree remains AVL after every deletion, we must augment the standard BST delete operation to perform some re-balancing. Following are two basic operations that can be performed to re-balance a BST without violating the BST property (keys(left) < key(root) < keys(right)). 

+ Left Rotation 
+ Right Rotation 

T1, T2 and T3 are subtrees of the tree rooted with y (on left side)
or x (on right side).
                
                y                               x
               / \     Right Rotation          /  \
              x   T3   – - – - – - – >        T1   y
             / \       < - - - - - - -            / \
            T1  T2     Left Rotation            T2  T3
Keys in both of the above trees follow the following order
      
    keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)
So BST property is not violated anywhere.
