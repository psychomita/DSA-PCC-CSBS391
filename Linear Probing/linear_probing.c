#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define null -9999
void display(int []);
int avail(int [],int);
int main()
{
	int ch,i,ind=0,num,key;
	int A[MAX];
	for(i=0;i<MAX;i++)
	 A[i]=null;
	 
	while(1)
	{
		printf("\n 1 for Insert ");
		printf("\n 2 for Display ");
		printf("\n 3 for Exit ");
		printf("\n\n Enter choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			if(ind==MAX-1)
			 printf("\n O V E R F L O W");
			else
			{
				printf("\n Enter the number ")	;
				scanf("%d",&num);
				
				key=num%MAX;
				if(A[key]==null)
				 A[key]=num;
				else
				{
					key=avail(A,key);
					printf("\n New index %d",key);
					A[key]=num;
				}
				display(A);
				ind++;
			}
			break;
			
			case 2:
			display(A);
			break;
			
			case 3:
			exit(1);
			
			default:
			printf("\n Wrong Choice");
		}
	}
}
void display(int A[])
{
	int i;
	for(i=0;i<MAX;i++)
	{
		if(A[i]==null)
		 printf("\n ---------");
		else
		 printf("\n %d",A[i]);
	}
}
int avail(int A[],int key)
{
	while(A[key]!=null)
	 key=(key+1)%MAX;
	 
	return key;
}
