#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev; // point the address of previous node
	struct node *next; //point the address of next node
}node;

node *start ,*temp,*ptr;
void insertFirst()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
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
void insertLast()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
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
void deleteFirst()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete Element %d",start->data);
		start=start->next;
	}
}
void deleteLast()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->next==NULL)
	{
		printf("\n Deleted Element %d",start->data);
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
		printf("\n Elements are ..\n");
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->next;
		}
	}
}
void search()
{
	int num,p=0;
	if(start==NULL)
	 printf("\n Search Not Possible ");
	else
	{
		printf("\n Enter the data : ");
		scanf("%d",&num);
		ptr=start;
		while(ptr!=NULL)
		{
			p++;
			if(ptr->data==num)
			 break;
			ptr=ptr->next;
		}
		if(ptr==NULL)
		 printf("\n Number not Present ");
		else
		 printf("\n Number present at position %d",p);
	}
}
void main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n\n 1 for Insert First ");
		printf("\n 2 for Insert Last ");
		printf("\n 3 for Delete First ");
		printf("\n 4 for Delete Last ");
		printf("\n 5 for Display ");
		printf("\n 6 for Search ");
		printf("\n 7 for Exit ");
		printf("\n Enter choice ");
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
			search();
			break;
			
			case 7:
			exit(1);
			
			default:
			printf("\n Wrong Choice ");
		}
	}
}