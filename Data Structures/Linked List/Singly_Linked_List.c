#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data; //actual data
	struct node *link; //address of next node;
}node;

node *start, *temp, *ptr;
void insertFirst()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		temp->link=start;
		start=temp;
	}
	
}
void insertLast()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		ptr=start;
		while(ptr->link!=NULL) // until last node
		 ptr=ptr->link; //move to the next node
		
		ptr->link=temp;
	}
}

void deleteFirst()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete Element %d",start->data);
		start=start->link;
	}
}
void deleteLast()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->link==NULL)
	{	printf("\n Delete Element %d",start->data);
		start=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->link->link!=NULL)
		 ptr=ptr->link;
		
		printf("\n Delete Element %d",ptr->link->data);
		ptr->link=NULL;
	}
}
void display()
{
	if(start==NULL)
	 printf("\n List is Empty ");
	 
	else
	{
		ptr=start;
		printf("\n Elements are : ");
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->link;
		}
	}
}
int main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n 1 for Insert First ");
		printf("\n 2 for Insert Last ");
		printf("\n 3 for Delete First ");
		printf("\n 4 for Delete Last ");
		printf("\n 5 for Display ");
		printf("\n 6 for Exit ");
		printf("\n\n Enter choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insertFirst();
			break;
			
			case 2:
			insertLast();
			break;
			
			case 3:
			deleteFirst();
			break;
			
			case 4:
			deleteLast();
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			exit(1);
			
			default:
			printf("\n Oops! Wrong choice ");
		}
	}
}
