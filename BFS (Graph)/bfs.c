#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 50
 
// This struct represents a directed graph using
// adjacency list representation
typedef struct Graph_t {
 
    // No. of vertices
    int V;
    bool adj[MAX_VERTICES][MAX_VERTICES];
} Graph;
 
// Constructor
Graph* Graph_create(int V)
{
    Graph* g = malloc(sizeof(Graph));
    g->V = V;
 
    for (int i = 0; i < V; i++) 
    {
        for (int j = 0; j < V; j++) 
        {
            g->adj[i][j] = false;
        }
    }
 
    return g;
}
 
// Destructor
void Graph_destroy(Graph* g) { free(g); }
 
// Function to add an edge to graph
void Graph_addEdge(Graph* g, int v, int w)
{
    // Add w to v’s list.
    g->adj[v][w] = true;
}
 
// Prints BFS traversal from a given source s
void Graph_BFS(Graph* g, int s)
{
    // Mark all the vertices as not visited
    bool visited[MAX_VERTICES];
    for (int i = 0; i < g->V; i++) {
        visited[i] = false;
    }
 
    // Create a queue for BFS
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue[rear++] = s;
 
    while (front != rear) 
    {
 
        // Dequeue a vertex from queue and print it
        s = queue[front++];
        printf("%d ", s);
 
        // Get all adjacent vertices of the dequeued
        // vertex s.
        // If an adjacent has not been visited,
        // then mark it visited and enqueue it
        for (int adjacent = 0; adjacent < g->V; adjacent++) 
             {
            if (g->adj[s][adjacent] && !visited[adjacent]) 
            {
                visited[adjacent] = true;
                queue[rear++] = adjacent;
            }
        }
    }
}
 
// Driver code

int main() 
{
    int numNodes, numEdges;
    printf("Enter the number of nodes and edges: ");
    scanf("%d %d", &numNodes, &numEdges);
    struct Graph* graph = createGraph(numNodes);
    printf("Enter the edges (src dest):\n");
    for (int i = 0; i < numEdges; i++) 
    {
        int src, dest;
        scanf("%d %d", &src, &dest);
        Graph_addEdge(graph, src, dest);
    }
    int startNode;
    printf("Enter the starting node for BFS: ");
    scanf("%d", &startNode);
    Graph_BFS(graph, startNode);
    return 0;
}
