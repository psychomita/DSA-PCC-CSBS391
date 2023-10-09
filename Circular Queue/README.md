## Problem Statement :
Write a menu driven c program to implement Circular Queue.

## Circular Queue :
    A Circular Queue is an extended version of a linear queue where the last element of the queue 
    is connected to the first element of the queue forming a circle. The operations are performed 
    based on FIFO (First In First Out) principle. It is also called ‘Ring Buffer’. 

### How Circular Queue Works
Circular Queue works by the process of circular increment i.e. when we try to increment the pointer and we reach the end of the queue, we start from the beginning of the queue.

Here, the circular increment is performed by modulo division with the queue size.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/52aada7f-2b55-449a-a70e-2a2d51467939)

### Implementation of Circular Queue using Array:
1. Initialize an array queue of size n, where n is the maximum number of elements that the queue can hold.
2. Initialize two variables front and rear to -1.
3. Enqueue: To enqueue an element x into the queue, do the following:
   + Increment rear by 1.
   + If rear is equal to n, set rear to 0.
   + If front is -1, set front to 0.
   + Set queue[rear] to x.
4. Dequeue: To dequeue an element from the queue, do the following:
   + Check if the queue is empty by checking if front is -1. 
   + If it is, return an error message indicating that the queue is empty.
   + Set x to queue[front].
   + If front is equal to rear, set front and rear to -1.
   + Otherwise, increment front by 1 and if front is equal to n, set front to 0.
   + Return x.

