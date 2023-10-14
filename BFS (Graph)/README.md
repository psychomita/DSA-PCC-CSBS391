## Problem Statement :
Write a program to implement BFS in c.

## Breadth First Search or BFS for a Graph :
The Breadth First Search (BFS) algorithm is used to search a graph data structure for a node that meets a set of criteria. It starts at the root of the graph and visits all nodes at the current depth level before moving on to the nodes at the next depth level.

## Working :
Starting from the root, all the nodes at a particular level are visited first and then the nodes of the next level are traversed till all the nodes are visited.

To do this a queue is used. All the adjacent unvisited nodes of the current level are pushed into the queue and the nodes of the current level are marked visited and popped from the queue.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/1f3914d9-a012-4393-aad3-76c6b4f28ee5)


**Time Complexity:**

    O(V+E), where V is the number of nodes and E is the number of edges.

**Auxiliary Space:** 

    O(V)
