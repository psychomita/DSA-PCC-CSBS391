//infix to postfix
#include<stdio.h>
#include<string.h>
#define MAX 100
int priority(char ch)
{
	if(ch=='^')
	 return 4;
	else if(ch=='*' || ch=='/' || ch=='%')
	 return 3;
	else if(ch=='+' || ch=='-')
	 return 2;
	else
	 return 1;
}
void push(char stk[], int *top,char op)
{
	*top=*top+1;
	 stk[*top]=op;
}
char pop(char stk[], int *top)
{
	char op=stk[*top];
	*top=*top-1;
	return op;
}
int main()
{
	char infix[MAX],postfix[MAX],stack[MAX];
	int top=-1;// initialize
	int i,ind=0;
	printf("Enter the infix expression : ");
	scanf("%s",infix);
	strupr(infix);
	for(i=0;i<strlen(infix);i++)
	{
		if(infix[i]=='(')
		 push(stack,&top,infix[i]);
		
		else if(infix[i]>='A' && infix[i]<='Z')
		 postfix[ind++]=infix[i];
		 
		else if(infix[i]==')')
		{
			while(stack[top]!='(')
			 postfix[ind++]=pop(stack,&top);
			
			top--; //'Remove ( from stack top
		}
		else //operator
		{
			if(priority(infix[i])>priority(stack[top]))
			 push(stack,&top,infix[i]);
			else
			{
				while(priority(infix[i])<=priority(stack[top]))
				 postfix[ind++]=pop(stack,&top);
				
				push(stack,&top,infix[i]);//operator place stack top
			}
		}
		stack[++top]='\0';
		postfix[ind]='\0';
		printf("\n %c\t%s\t%s",infix[i],stack,postfix);
		top--;
	}//end of loop
}
