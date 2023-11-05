#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};

// Structure for a Stack Node
struct StackNode 
{
    struct Node* data;
    struct StackNode* next;
};

// Stack to support non-recursive traversal
struct Stack 
{
    struct StackNode* top;
};

// Function to create a new Node
struct Node* newNode(int data) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to initialize an empty stack
struct Stack* createStack() 
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}


// Function to push a Node onto the stack
void push(struct Stack* stack, struct Node* node) 
{
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = node;
    stackNode->next = stack->top;
    stack->top = stackNode;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) 
{
    return stack->top == NULL;
}

// Function to pop a Node from the stack
struct Node* pop(struct Stack* stack) 
{
    if (isEmpty(stack))
        return NULL;
    struct StackNode* temp = stack->top;
    stack->top = stack->top->next;
    struct Node* popped = temp->data;
    free(temp);
    return popped;
}

// Function for non-recursive preorder traversal
void preorderTraversal(struct Node* root) 
{
    if (root == NULL)
        return;
    struct Stack* stack = createStack();
    push(stack, root);
    while (!isEmpty(stack)) {
        struct Node* current = pop(stack);
        printf("%d ", current->data);
        if (current->right)
            push(stack, current->right);
        if (current->left)
            push(stack, current->left);
    }
}

// Function for non-recursive inorder traversal
void inorderTraversal(struct Node* root) 
{
    if (root == NULL)
        return;
    struct Stack* stack = createStack();
    struct Node* current = root;
    while (current || !isEmpty(stack)) 
    {
        while (current) 
        {
            push(stack, current);
            current = current->left;
        }
        current = pop(stack);
        printf("%d ", current->data);
        current = current->right;
    }
}

// Function for non-recursive postorder traversal
void postorderTraversal(struct Node* root) 
{
    if (root == NULL)
        return;
    struct Stack* stack1 = createStack();
    struct Stack* stack2 = createStack();
    push(stack1, root);
    while (!isEmpty(stack1)) 
    {
        struct Node* current = pop(stack1);
        push(stack2, current);
        if (current->left)
            push(stack1, current->left);
        if (current->right)
            push(stack1, current->right);
    }
    while (!isEmpty(stack2)) 
    {
        struct Node* temp = pop(stack2);
        printf("%d ", temp->data);
    }
}

// Function to insert a node into BST
struct Node* insert(struct Node* root, int data) 
{
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

int main() 
{
    struct Node* root = NULL;
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
    preorderTraversal(root);

    printf("\nInorder Traversal: ");
    inorderTraversal(root);

    printf("\nPostorder Traversal: ");
    postorderTraversal(root);

    return 0;
}
