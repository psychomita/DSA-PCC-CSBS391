#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void Insert(int Q[], int *f, int *r)
{
	int num;
	if((*f==0&&*r==MAX-1)||(*r+1==*f))
		printf("\nQueue Overflow");
	else
	{
		printf("\nEnter the number to be inserted ");
		scanf("%d", &num);
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
		printf("\nQueue Underflow");
	else
	{
		printf("\nElement deleted is= %d", Q[*f]);
		if(*f==*r)
		{
			*f=-1;
			*r=-1;
		}
		else
			*f=(*f+1)%MAX;
	}
}
void Display(int Q[], int f, int r)
{
	int i;
	if(f==-1)
		printf("\nQueue Empty");
	else
	{
		printf("\n");
		if(f<=r)
		{
			for(i=f;i<=r;i++)
				printf("%d\t",Q[i]);
		}
		else
		{
			for(i=f;i<=MAX-1;i++)
				printf("%d\t",Q[i]);
			for(i=0;i<=r;i++)
				printf("%d\t",Q[i]);
		}
	}
}
int main()
{
	int ch,f=-1,r=-1;
	int Q[MAX];
	printf("1 for Insert\n2 for Delete\n3 for Display\n4 for Exit");
	while(1)
	{
		printf("\nEnter your choice ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			Insert(Q,&f,&r);
			break;
			
			case 2:
			Delete(Q,&f,&r);
			break;
			
			case 3:
			Display(Q,f,r);
			break;
			
			case 4:
			exit(1);
			
			default:
			printf("\nWrong choice entered");
		}
	}
	return 0;
}
			
