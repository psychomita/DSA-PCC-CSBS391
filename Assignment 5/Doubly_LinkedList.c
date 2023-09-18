#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev; // point the address of previous node
	struct node *next; //point the address of next node
}node;

node *start ,*temp,*ptr;
void insertFront()
{
	temp=(node*)malloc(sizeof(node));
	printf(" Enter the value to be inserted: ");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		temp->next=start;
		start->prev=temp;
		start=temp;
	}
}
void insertEnd()
{
	temp=(node*)malloc(sizeof(node));
	printf(" Enter the value to be inserted: ");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		 ptr=ptr->next;
		 
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void deleteFront()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete Element = %d",start->data);
		start=start->next;
	}
}
void deleteEnd()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->next==NULL)
	{
		printf("\n Deleted Element = %d",start->data);
		start=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		 ptr=ptr->next;
		 
		ptr=ptr->prev;
		
		ptr->next->prev=NULL;
		ptr->next=NULL;
	}
}
void display()
{
	if(start==NULL)
	 printf("\n List is Empty");
	else
	{
		ptr=start;
		printf("\n Elements are:\n");
		while(ptr!=NULL)
		{
			printf(" %d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}
void reverse()
{
    node* current = start;
    node* temp = NULL;

    while (current != NULL) 
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        start = temp->prev;
}
void main()
{
	int ch;
	start=NULL;
    printf(" 1 for Insert Front ");
	printf("\n 2 for Insert End ");
	printf("\n 3 for Delete Front ");
	printf("\n 4 for Delete End ");
	printf("\n 5 for Display ");
	printf("\n 6 for Reverse ");
	printf("\n 7 for Exit ");
	while(1)
	{
		printf("\n Enter choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insertFront();
			break;
			
			case 2:
			insertEnd();
			break;
			
			case 3:
			deleteFront();
			break;
			
			case 4:
			deleteEnd();
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			reverse();
            printf("\n Linked list reversed.");
			break;
			
			case 7:
			exit(1);
			
			default:
			printf("\n Wrong Choice ");
		}
	}
}