## Problem Statement :
Implement Doubly Linked List and perform insertion and deletion  from front and end, display and reverse in C.

## Doubly Linked List :
    A doubly linked list (DLL) is a special type of linked list in which each node contains a pointer to the 
    previous node as well as the next node of the linked list.

A doubly linked list is a type of linked list in which each node consists of 3 components :

+ prev - address of the previous node
+ data - data item
+ next - address of next node

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/0b2e475b-8786-4819-994c-3249a50c0a69)

## Advantages of Doubly Linked List over the singly linked list:
+ A DLL can be traversed in both forward and backward directions. 
+ The delete operation in DLL is more efficient if a pointer to the node to be deleted is given. 
+ We can quickly insert a new node before a given node. 
+ In a singly linked list, to delete a node, a pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer. 

## Disadvantages of Doubly Linked List over the singly linked list:
+ Every node of DLL Requires extra space for a previous pointer. It is possible to implement DLL with a single pointer though (See this and this). 
+ All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with the next pointers. For example in the following functions for insertions at different positions, we need 1 or 2 extra steps to set the previous pointer.



