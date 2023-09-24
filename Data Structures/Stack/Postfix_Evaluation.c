#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100
void push(int stk[], int *top, int num)
{
	*top=*top+1;
	stk[*top]=num;
}
int pop(int stk[], int *top)
{
	int n=stk[*top];
	*top=*top-1;
	return n;
}
int main()
{
	char post[MAX],w[MAX];
	int stack[MAX];
	int i,j=0,k,num=0,top=-1,A,B,R;
	printf("Enter the expression ");
	gets(post);
	strcat(post," ");
	for(i=0;i<strlen(post);i++)
	{
		if(post[i]!=' ')
		 w[j++]=post[i];
		else
		{
			w[j]='\0';
			if(strlen(w)==1 && (w[0]=='+' || w[0]=='-' || w[0]=='*' || w[0]=='/' || w[0]=='^' || w[0]=='%'))
			{
				B=pop(stack,&top);
				A=pop(stack,&top);
				printf("\n");
				if(w[0]=='+')
				 R=A+B;
				else if(w[0]=='-')
				 R=A-B;
				else if(w[0]=='*')
				 R=A*B;
				else if(w[0]=='/')
				 R=A/B;
				else if(w[0]=='%')
				 R=A%B;
				else
				 R=pow(A,B);
				
				push(stack,&top,R);
			}
			else
			{
				num=0;
				for(k=0;k<strlen(w);k++)//15 0-9 ASCII 48-57
				 num=num*10+(int)w[k]-48; //15
				 
				 push(stack,&top,num);
				
			}
			j=0;
		}
		 
	}
	printf("\n Result %d",stack[top]);
}