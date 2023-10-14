#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 100
int i;

// Structure to represent a node in the adjacency list
struct Node 
{
    int data;
    struct Node* next;
};

// Structure to represent a graph
struct Graph 
{
    int numNodes;
    struct Node* adjList[MAX_NODES];
    int visited[MAX_NODES];
};

// Function to create a new node
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize a graph
struct Graph* createGraph(int numNodes) 
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numNodes = numNodes;

    for (i = 0; i < numNodes; i++) 
    {
        graph->adjList[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) 
{
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

// Depth-First Search function
void DFS(struct Graph* graph, int node) 
{
    if (graph->visited[node])
        return;

    printf("%d ", node);
    graph->visited[node] = 1;

    struct Node* curr = graph->adjList[node];
    while (curr != NULL) {
        DFS(graph, curr->data);
        curr = curr->next;
    }
}

int main() 
{
    int numNodes, numEdges;
    printf("Enter the number of nodes and edges: ");
    scanf("%d %d", &numNodes, &numEdges);

    struct Graph* graph = createGraph(numNodes);

    printf("Enter the edges (src dest):\n");
    for (i = 0; i < numEdges; i++) 
    {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(graph, src, dest);
    }
    int startNode;
    printf("Enter the starting node for DFS: ");
    scanf("%d", &startNode);
    DFS(graph, startNode);
    return 0;
}
