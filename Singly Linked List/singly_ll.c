#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data; //actual data
	struct node *link; //address of next node;
}node;

node *start, *temp, *ptr;
void insertFirst()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		temp->link=start;
		start=temp;
	}
	
}
void insertLast()
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		ptr=start;
		while(ptr->link!=NULL) // until last node
		 ptr=ptr->link; //move to the next node
		
		ptr->link=temp;
	}
}

void deleteFirst()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete Element %d",start->data);
		start=start->link;
	}
}
void deleteLast()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->link==NULL)
	{	printf("\n Delete Element %d",start->data);
		start=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->link->link!=NULL)
		 ptr=ptr->link;
		
		printf("\n Delete Element %d",ptr->link->data);
		ptr->link=NULL;
	}
}
void deleteAny()
{
	int pos,flag=0;
	if(start==NULL)
	 printf("\n List is Empty ");
	else
	{
		printf("\n Enter the position ");
		scanf("%d",&pos);
		
		if(pos==1)
		 start=start->link;
		else
		{
			ptr=start;
			int i=1;
			while(ptr!=NULL)
			{
				if(i==pos-1)
				{
					printf("\n Delete Element %d",ptr->link->data);
					ptr->link=ptr->link->link;
					flag=1;
					break;
				}
				ptr=ptr->link;
				i++;
			}
		}
		if(flag==0)
		 printf("\n Element not Present ");
	}
}
void sort() 
{
    int swapped, i,temp;
    node* ptr1;
    node* lptr = NULL;
	if (start == NULL || start->link == NULL)
        return;
     do 
	 {
        swapped = 0;
        ptr1 = start;
        while (ptr1->link != lptr) 
		{
            if (ptr1->data > ptr1->link->data) 
			{
                // Swap data of adjacent nodes
                temp = ptr1->data;
                ptr1->data = ptr1->link->data;
                ptr1->link->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->link;
        }
        lptr = ptr1;
    } while (swapped);
	printf("\n List has been Sorted ");
}
void display()
{
	if(start==NULL)
	 printf("\n List is Empty ");
	 
	else
	{
		ptr=start;
		printf("\n Elements are : ");
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->link;
		}
	}
}
int main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n 1 for Insert First ");
		printf("\n 2 for Insert Last ");
		printf("\n 3 for Delete First ");
		printf("\n 4 for Delete Last ");
		printf("\n 5 for Delete Any ");
		printf("\n 6 for Sort ");
		printf("\n 7 for Display ");
		printf("\n 8 for Exit ");
		printf("\n\n Enter choice ");
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
			deleteAny();
			break;
			
			case 6:
			sort();
			break;
			
			case 7:
			display();
			break;
			
			case 8:
			exit(1);
			
			default:
			printf("\n Oops! Wrong choice ");
		}
	}
}
