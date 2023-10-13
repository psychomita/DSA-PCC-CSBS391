#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct
{
	int data;
	int priority;
} item;
typedef struct 
{
    item array[MAX];
    int size;
} pq;

// Function to initialize an empty priority queue
void initializeQueue(pq* queue) 
{
    queue->size = 0;
}

// Function to check if the priority queue is empty
int isEmpty(pq* queue) 
{
    return (queue->size == 0);
}

// Function to insert an element into the priority queue
void enqueue(pq* queue, int data, int priority) 
{
    if (queue->size >= MAX) 
	{
        printf("Queue Overflow.\n");
        return;
    }

    item newItem;
    newItem.data = data;
    newItem.priority = priority;

    // Find the correct position to insert the new element
    int i = queue->size;
    while (i > 0 && queue->array[i - 1].priority > priority) 
	{
        queue->array[i] = queue->array[i - 1];
        i--;
    }

    queue->array[i] = newItem;
    queue->size++;
}

// Function to dequeue and return the highest-priority element
item dequeue(pq* queue) 
{
    if (isEmpty(queue)) {
        printf("Queue Underflow\n");
        item emptyItem = {0, 0};
        return emptyItem;
    }

    item highestPriorityItem = queue->array[0];

    // Shift elements to the left to fill the gap
    for (int i = 1; i < queue->size; i++) 
	{
        queue->array[i - 1] = queue->array[i];
    }

    queue->size--;
    return highestPriorityItem;
}

// Function to print the priority queue
void print(pq* queue) 
{
  for (int i = 0; i < queue->size; ++i)
    printf("%d ", queue->array[i]);
  printf("\n");
}

int main() 
{
    pq queue;
	int ch;
    initializeQueue(&queue);
	printf("1 for ENQUEUE\n");
	printf("2 for DEQUEUE\n");
	printf("3 for PRINT\n");
	printf("4 for EXIT\n");
	while(1)
	{
		printf("Enter your choice :\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter the number to be inserted :\n");
				int num;
				scanf("%d", &num);
				printf("Enter the priority :\n");
				int priority;
				scanf("%d", &priority);
				enqueue(&queue, num, priority);
				break;
			case 2:
				item del = dequeue(&queue);
				printf("Element deleted = %d\n", del);
				break;
			case 3:
				print(&queue);
				break;
			case 4:
			    exit(1);
			default :
				printf("Wrong choice entered\n");
		}
	}
    return 0;
}