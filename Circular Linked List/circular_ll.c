#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}node;

node *start;
void insertFirst()
{
	node *temp,*ptr;
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	{
		start=temp;
		temp->link=start;
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		 ptr=ptr->link;
		 
		ptr->link=temp;
		temp->link=start;
		start=temp;
	}
}
void insertLast()
{
	node *temp,*ptr;
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	{
		start=temp;
		temp->link=start;
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		 ptr=ptr->link;
		 
		ptr->link=temp;
		temp->link=start;
		
	}
}
void deleteFirst()
{
	node *ptr;
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->link==start)//single node
	 start=NULL;
	else
	{
		ptr=start;
		while(ptr->link!=start)
		 ptr=ptr->link;
		
		start=start->link;
		ptr->link=start;
	
	}
}
void deleteLast()
{
	node *ptr;
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->link==start)//single node
	 start=NULL;
	else
	{
		ptr=start;
		while(ptr->link->link!=start)
		 ptr=ptr->link;
		
		ptr->link=start;
	
	}
}
void searchDelete()
{
	node *ptr;
	int num,f=0;
	if(start==NULL)
	 printf("\n List is Empty");
	else
	{
		printf("Enter the search number ");
		scanf("%d",&num);
		if(num==start->data && start->link==start)
		 start=NULL;
		else
		{
			ptr=start;
			while(ptr->link!=start)
			 ptr=ptr->link;
			 
			if(start->data==num)
			{
				start=start->link;
				ptr->link=start;
				f++;
			}
			else
			{
				ptr=start;
				while(ptr->link!=start)
				{
					if(ptr->link->data==num)
					{
						ptr->link=ptr->link->link;
						f++;
						break;
					}
					ptr=ptr->link;
				}
			}
			if(f==0)
			 printf("\n Number not present ");
		}
	}
}
void searchInsert()
{
	node *ptr,*temp;
	int num,f=0;
	if(start==NULL)
	 printf("\n List is Empty");
	else
	{
		printf("Enter the search number ");
		scanf("%d",&num);
		printf("Enter new number : ");
		temp=(node*)malloc(sizeof(node));
		scanf("%d",&temp->data);
		temp->link=NULL;

		
		if(start->link==start && start->data==num)
		 {
		 	temp->link=start;
		 	start->link=temp;
		 	f++;
		 }
		 else
		 {
		 	ptr=start;                     
		 	while(ptr->link!=start)
		 	{
		 		if(ptr->data==num)
		 		{
				  temp->link=ptr->link;
				  ptr->link=temp;
				  f++;
				  break;
				 }
				 ptr=ptr->link;
			 }
			 if(f==0)
			  printf("\n Number not present ");
		 }
	}
}
void display()
{
	node *ptr;
	if(start==NULL)
	 printf("\n List Empty ");
	else
	{
		ptr=start;
		while(ptr->link!=start)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->link;
		}
		printf("\n %d",ptr->data);
	}
}
int main()
{
	start=NULL;
	int ch;
	while(1)
	{
		printf("\n1 for Insert First ");
		printf("\n2 for Insert Last ");
		printf("\n3 for Delete First ");
		printf("\n4 for Delete Last ");
		printf("\n5 for Search Delete ");
		printf("\n6 for Search Insert ");
		printf("\n7 for Display ");
		printf("\n 8 for Exit ");
		printf("\n Enter choice ..");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insertFirst();
			break;
			
			case 2:
			insertLast();
			break;
			
			case 3:
			deleteFirst();
			break;
			
			case 4:
			deleteLast();
			break;
			
			case 5:
			searchDelete();
			break;
			
			case 6:
			searchInsert();
			break;
			
			case 7:
			display();
			break;
			
			case 8:
			exit(1);
		
		}
	}
}
