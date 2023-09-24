#include<stdio.h>
#include<stdlib.h>
#define MAX 6
void Insert(int Q[], int *f, int *r)
{
	int num;
	if((*f==0 && *r==MAX-1) ||(*r+1==*f))
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
			*r=(*r+1)%MAX;
			Q[*r]=num;
		}
	}
}
void Delete(int Q[], int *f, int *r)
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
			*f=(*f+1)%MAX;
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
		if(f<=r)
		{
		for(i=f;i<=r;i++)
			printf("\n %d",Q[i]);
		}
		else
		{
			for(i=f;i<MAX;i++)
			  printf("\n %d",Q[i]);
			for(i=0;i<=r;i++)
			 printf("\n %d",Q[i]);
		
		}
	}
}
int main()
{
	int ch;
	int f=-1, r=-1;
	int Q[MAX];
	while(1)
	{
		printf("\n1 for Insert ");
		printf("\n2 for Delete ");
		printf("\n3 for Display ");
		printf("\n4 for Exit ");
		printf("\n\n Enter choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			Insert(Q,&f,&r);
			break;
			
			case 2:
			Delete(Q,&f,&r);
			break;
			
			case 3:
			display(Q,f,r);
			break;
			
			case 4:
			exit(1);
			
			default:
			printf("\n Wrong choice ");
		}
	}
	return 0;
}