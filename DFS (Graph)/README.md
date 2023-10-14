## Problem Statement :
Write a program to implement DFS in C.

## Depth First Search or DFS for a Graph :
Depth First Traversal (or DFS) for a graph is similar to Depth First Traversal of a tree. The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice). To avoid processing a node more than once, use a boolean visited array. A graph can have more than one DFS traversal.

## Working :
Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.

**Time complexity:** 

    O(V + E), where V is the number of vertices and E is the number of edges in the graph.
**Auxiliary Space:** 

    O(V + E), since an extra visited array of size V is required, And stack size for iterative call to DFS function.
