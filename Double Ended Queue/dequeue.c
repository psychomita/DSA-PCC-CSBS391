#include<stdio.h>
#include<stdlib.h>
#define MAX 6
void InsertRear(int Q[], int *f, int *r)
{
	int num;
	if(*r==MAX-1)
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		
		if(*r==-1)
		{
			*f=0;
			*r=0;
			Q[*r]=num;
		}
		else
		{
			*r=*r+1;
			Q[*r]=num;
		}
	}
}
void InsertFront(int Q[], int *f, int *r)
{
	int num;
	if(*f==0)
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter the number ");
		scanf("%d",&num);
		
		if(*f==-1)
		{
			*f=0;
			*r=0;
			Q[*f]=num;
		}
		else
		{
			*f=*f-1;
			Q[*f]=num;
		}
	}
}
void DeleteFront(int Q[], int *f, int *r)
{
	if(*f==-1)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete element %d",Q[*f]);
		if(*f==*r)
		{
			*f=-1;
			*r=-1;
		}
		else
		{
			*f=*f+1;
		}
	}
}
void DeleteRear(int Q[], int *f, int *r)
{
	if(*r==-1)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete element %d",Q[*r]);
		if(*f==*r)
		{
			*f=-1;
			*r=-1;
		}
		else
		{
			*r=*r-1;
		}
	}
}
void display(int Q[], int f, int r)
{
	int i;
	if(f==-1)
	 printf("\n Queue is Empty ");
	else
	{
		for(i=f;i<=r;i++)
			printf("\n %d",Q[i]);
	}
}
int main()
{
	int ch;
	int f=-1, r=-1;
	int Q[MAX];
	while(1)
	{
		printf("\n1 for Insert Front");
		printf("\n2 for Insert Rear");
		printf("\n3 for Delete Front");
		printf("\n4 for Delete Rear");
		printf("\n5 for Display ");
		printf("\n6 for Exit ");
		printf("\n\n Enter choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			
			case 1:
			InsertFront(Q,&f,&r);
			break;
			
			case 2:
			InsertRear(Q,&f,&r);
			break;
			
			case 3:
			DeleteFront(Q,&f,&r);
			break;
			
			
			case 4:
			DeleteRear(Q,&f,&r);
			break;
			
			case 5:
			display(Q,f,r);
			break;
			
			case 6:
			exit(1);
			
			default:
			printf("\n Wrong choice ");
		}
	}
	return 0;
}
