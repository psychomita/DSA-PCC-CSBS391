#include <stdio.h>
#include <stdlib.h>

// Binary Search Tree Node
typedef struct Node 
{
    int key;
    struct Node* left;
    struct Node* right;
}node;

// Function to create a new node
node* createNode(int key) 
{
    node* newNode = (node*)malloc(sizeof(node*));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a key into the BST
node* insert(node* root, int key) 
{
    if (root == NULL)
        return createNode(key);
    if (key < root->key) 
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

// Function for in-order traversal of the BST (non-recursive)
void inOrderTraversal(node* root) 
{
    node* stack[100];
    int top = -1;
    node* current = root;
    while (current != NULL || top != -1) 
    {
        while (current != NULL) 
        {
            stack[++top] = current;
            current = current->left;
        }
        current = stack[top--];
        printf("%d ", current->key);
        current = current->right;
    }
}

// Function for pre-order traversal of the BST (non-recursive)
void preOrderTraversal(node* root) 
{
    if (root == NULL)
        return;
    node* stack[100];
    int top = -1;
    stack[++top] = root;
    while (top != -1) 
    {
        node* current = stack[top--];
        printf("%d ", current->key);
        if (current->right != NULL)
            stack[++top] = current->right;
        if (current->left != NULL)
            stack[++top] = current->left;
    }
}

// Function for post-order traversal of the BST (non-recursive)
void postOrderTraversal(node* root) 
{
    if (root == NULL)
        return;
    node* stack1[100];
    node* stack2[100];
    int top1 = -1, top2 = -1;
    stack1[++top1] = root;
    while (top1 != -1) 
    {
        node* current = stack1[top1--];
        stack2[++top2] = current;
        if (current->left != NULL)
            stack1[++top1] = current->left;
        if (current->right != NULL)
            stack1[++top1] = current->right;
    }
    while (top2 != -1)
        printf("%d ", stack2[top2--]->key);
}

int main() 
{
    node* root = NULL;
    int numNodes, data,i;    
    printf("Enter the number of nodes in the BST: ");
    scanf("%d", &numNodes);    
    printf("Enter the values of the nodes:\n");
    for ( i = 0; i < numNodes; i++) 
    {
        scanf("%d", &data);
        root = insert(root, data);
    }
    printf("Preorder Traversal: ");
    preOrderTraversal(root);
    printf("\nInorder Traversal: ");
    inOrderTraversal(root);
    printf("\nPostorder Traversal: ");
    postOrderTraversal(root);
    return 0;
}
