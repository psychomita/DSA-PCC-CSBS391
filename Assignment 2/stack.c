#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int stk[],int *top)
{
	if(*top==MAX-1)
		printf("STACK OVERFLOW\n");
	else
	{
		int num;
		printf("Enter the number to be inserted\n");
		scanf("%d",&num);
		*top+=1;
		stk[*top]=num;
	}
}
void pop(int stk[],int *top)
{
	if(*top==-1)
		printf("STACK UNDERFLOW\n");
	else
	{
		printf("Element deleted is %d\n",stk[*top]);
		*top-=1;
	}
}
void peep(int stk[],int top)
{
	if(top==-1)
		printf("Stack Empty\n");
	else
		printf("Element at top is %d\n",stk[top]);
}
void display(int stk[],int top)
{
	if(top==-1)
		printf("Nothing to Display\n");
	else
	{
		for(int i=top;i>=0;i--)
			printf("%d\n", stk[i]);
	}
}	
int main()
{
	int top=-1,stk[MAX],ch;
	printf("1 for PUSH\n");
	printf("2 for POP\n");
	printf("3 for PEEP\n");
	printf("4 for DISPLAY\n");
	printf("5 for EXIT\n");
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				push(stk,&top);
				break;
			case 2:
				pop(stk,&top);
				break;
			case 3:
				peep(stk,top);
				break;
			case 4:
				display(stk,top);
				break;
			case 5:
				exit(1);
			default:
				printf("\nWrong Choice");
		}
	}
	return 0;
}
	
	
