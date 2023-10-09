## Problem Statement :
Implement stack using linked list in C.

## Implement a Stack using Singly Linked List :
To implement a stack using the singly linked list concept, all the singly linked list operations should be performed based on Stack operations LIFO(last in first out) and with the help of that knowledge, we are going to implement a stack using a singly linked list. 

So we need to follow a simple rule in the implementation of a stack which is last in first out and all the operations can be performed with the help of a top variable.

In the stack Implementation, a stack contains a top pointer. which is the “head” of the stack where pushing and popping items happens at the head of the list. The first node has a null in the link field and second node-link has the first node address in the link field and so on and the last node address is in the “top” pointer.

    The main advantage of using a linked list over arrays is that it is possible to implement a stack 
    that can shrink or grow as much as needed. Using an array will put a restriction on the maximum 
    capacity of the array which can lead to stack overflow. Here each new node will be dynamically 
    allocated. So overflow is not possible.
