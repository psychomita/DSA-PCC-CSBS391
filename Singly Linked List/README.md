## Problem Statement :
Implement Singly Linked List and related operations  like insertion, deletion, display, reverse and sort in C.

## Singly Linked List :
    Linked List is a linear data structure, in which elements are not stored at a contiguous location, rather they are 
    linked using pointers. Linked List forms a series of connected nodes, where each node stores the data and the 
    address of the next node.
    
    A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations 
    and each element is connected only to its next element using a pointer.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/d3d147b0-3181-4571-87fd-c3aac5ddfa79)

+ **Node Structure:** A node in a linked list typically consists of two components:

+ **Data:** It holds the actual value or data associated with the node.

+ **Next Pointer:** It stores the memory address (reference) of the next node in the sequence.

+ **Head and Tail:** The linked list is accessed through the head node, which points to the first node in the list. 
                     The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.

## Why linked list data structure needed?

+ **Dynamic Data structure:** The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.
+ **Ease of Insertion/Deletion:** The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.
+ **Efficient Memory Utilization:** As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory. 
+ **Implementation:** Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.

