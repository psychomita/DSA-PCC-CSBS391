#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and the next pointer
struct node 
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;

int count = 0;
// Push() operation on a  stack
void push(int data) 
{
     if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

int pop() 
{
     top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->info;
    free(top);
    top = top1;
    count--;
    return popped;
}

void display() 
{
    // Display the elements of the stack
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    
    printf("\nElements of the stack are:");
    while (top1 != NULL)
    {
        printf("\n%d", top1->info);
        top1 = top1->ptr;
    }

}

int main() 
{
    int ch, value;
    printf("1. Push\n2. Pop\n3. Display\n4. Exit");
    while(1) 
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) 
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("\nPopped element is :%d", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nWrong Choice!");
        }
    }
}