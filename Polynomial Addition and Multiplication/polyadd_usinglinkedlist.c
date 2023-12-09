#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coef;
	int exp;
	struct node *link;
}poly;

poly * insert(poly *s, poly *t)
{
	poly *ptr;
	if(s==NULL)
	 s=t;
	else
	{
		ptr=s;
		while(ptr->link!=NULL)
		 ptr=ptr->link;
		 
		ptr->link=t;
	}
	return s;
}
void display(poly *s)
{
	poly *ptr;
	if(s==NULL)
	 printf("\n List is Empty ");
	else
	{
		ptr=s;
		while(ptr->link!=NULL)
		{
			printf(" %dX^%d + ",ptr->coef,ptr->exp);
			ptr=ptr->link;
		}
		printf(" %dX^%d  \n",ptr->coef,ptr->exp);
	}
}
poly * add(poly *p1, poly *p2)
{
	poly *r=NULL;
	poly *temp,*ptr;
	while(p1!=NULL && p2!=NULL)
	{
		temp=(poly*)malloc(sizeof(poly));
		if(p1->exp>p2->exp)
		{
			temp->exp=p1->exp;
			temp->coef=p1->coef;
			temp->link=NULL;
			p1=p1->link;
		}
		else if(p1->exp<p2->exp)
		{
			temp->exp=p2->exp;
			temp->coef=p2->coef;
			temp->link=NULL;	
			p2=p2->link;
		}
		else
		{
			temp->exp=p1->exp;
			temp->coef=p1->coef+p2->coef;
			temp->link=NULL;
			p1=p1->link;
			p2=p2->link;
		}
		r=insert(r,temp);
	}
	ptr=r;
	while(ptr->link!=NULL)
	 ptr=ptr->link;
	if(p1==NULL)
	 ptr->link=p2;
	else
	ptr->link=p1;
	
   return r;
	 
}
int main()
{
	int n1,n2,i;
	poly *p1,*p2,*p3,*temp;
	p1=NULL;
	p2=NULL;
	p3=NULL;
	printf("\n Enter number of terms for first expression ");
	scanf("%d",&n1);
	
	for(i=1;i<=n1;i++)
	{
		temp=(poly*)malloc(sizeof(poly));
		printf("\n Enter coef and expo ");
		scanf("%d%d",&temp->coef,&temp->exp);
		temp->link=NULL;
		
	 	p1=insert(p1,temp);
	}
	printf("\n Enter number of terms for second expression ");
	scanf("%d",&n2);
	
	for(i=1;i<=n2;i++)
	{
		temp=(poly*)malloc(sizeof(poly));
		printf("\n Enter coef and expo ");
		scanf("%d%d",&temp->coef,&temp->exp);
		temp->link=NULL;
	 	p2=insert(p2,temp);
	}
	p3=add(p1,p2);
	display(p1);
	display(p2);
	display(p3);
	return 0;	
}
