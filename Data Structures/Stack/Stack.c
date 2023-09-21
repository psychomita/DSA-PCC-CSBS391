#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int stk[], int *top)
{
	int num;
	if(*top==MAX-1)
	 printf("\n O V E R F L O W");
	else
	{
		printf("Enter the number ");
		scanf("%d",&num);
		*top=*top+1;
		stk[*top]=num;// place the number at stack top
	}
}
void pop(int stk[], int *top)
{
	if(*top==-1)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Deleted %d",stk[*top]);
		*top=*top-1;
	}
}
void peep(int stk[], int top)
{
	if(top==-1)
	 printf("\n Stack Empty");
	else
	{
		printf("\n Element %d",stk[top]);
	}
}
void display(int stk[], int top)
{
	int i;
	if(top==-1)
	 printf("\n Nothing to Display ");
	else
	{
		for(i=top;i>=0;i--)
		 printf("\n %d",stk[i]);
	}
}
int main()
{
	int stack[MAX];
	int ch;
	int top=-1;// initialize
	while(1)
	{
		printf("\n 1 for PUSH ");
		printf("\n 2 for POP ");
		printf("\n 3 for PEEP ");
		printf("\n 4 for DISPLAY ");
		printf("\n 5 for EXIT ");
		printf("\n Enter CHoice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			push(stack,&top);
			break;
			
			case 2:
			pop(stack,&top);
			break;
			
			case 3:
			peep(stack,top);
			break;
			
			case 4:
			display(stack,top);
			break;
			
			case 5:
			exit(1);
			
			default:
			printf("\n Wrong choice ");
		}
	}
}