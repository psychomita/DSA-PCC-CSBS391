#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 struct node
{
	int Q[MAX];
	int front;
	int rear;
}DQ;


void insertRear()
{
	int num;
	if(DQ.rear==MAX-1) 
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		
		if(DQ.rear==-1)
		{
			DQ.front=0;
			DQ.rear=0;
			DQ.Q[DQ.rear]=num;
		}
		else
		{
			DQ.rear++;
			DQ.Q[DQ.rear]=num;
		}
	}
}
void insertFront()
{
	int num;
	if(DQ.front==0) 
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		
		if(DQ.front==-1)
		{
			DQ.front=0;
			DQ.rear=0;
			DQ.Q[DQ.front]=num;
		}
		else
		{
			DQ.front--;
			DQ.Q[DQ.front]=num;
		}
	}
}
void deleteFront()
{
	if(DQ.front==-1) 
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete %d ",DQ.Q[DQ.front]);
		if(DQ.rear==DQ.front)
		{
			DQ.front=-1;
			DQ.rear=-1;
		}
		else
		{
			DQ.front++;
		}
	}
}
void deleteRear()
{
	if(DQ.rear==-1) 
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete %d ",DQ.Q[DQ.rear]);
		if(DQ.rear==DQ.front)
		{
			DQ.front=-1;
			DQ.rear=-1;
		}
		else
		{
			DQ.rear--;
		}
	}
}
void display()
{
	if(DQ.front==-1) 
	 printf("\n Empty Queue");
	else
	{
		for(int i=DQ.front;i<=DQ.rear;i++)
		 printf("\n %d",DQ.Q[i]);
	}
}
int main()
{
	int ch;
	DQ.front=-1;
	DQ.rear=-1;
	while(1)
	{
		printf("\n 1 for Insert Rear ");
		printf("\n 2 for Insert Front ");
		printf("\n 3 for Delete Front ");
		printf("\n 4 for Delete Rear ");
		printf("\n 5 for Display ");
		printf("\n 6 for Exit ");
		printf("\n Enter the choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insertRear();
			break;
			
			case 2:
			insertFront();
			break;
			
			
			case 3:
			deleteFront();
			break;
			
			case 4:
			deleteRear();
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			exit(1);
			
			default:
			printf("\n Wrong choice ");
		}
	}
	
	return 0;
}
