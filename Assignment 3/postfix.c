#include<stdio.h>
int stack[50];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *p;
    int n1,n2,n3,num;
    printf("Enter the expression: ");
    scanf("%[^\n]%*c",exp);
    p = exp;
    while(*p != '\0')
    {
        if(isdigit(*p))
       {
            num = *p - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*p)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                    n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        p++;
    }
    printf("\nThe result of expression %s = %d\n",exp,pop());
    return 0;
}