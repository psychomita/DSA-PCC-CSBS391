//linear search recursive
#define MAX 100
#include<stdio.h>
int search(int a[],int ind, int n, int num)
{
	if(ind==n)//base case
	 return -1;
	else if(a[ind]==num)
	 return ind;
	else
	 return search(a,ind+1,n, num);// recursive statement
	
}
int main()
{
	int a[MAX];
	int i, n, num,pos;
	printf("Enter number of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number ");
		scanf("%d",&a[i]);
	}
	printf("\n Enter the search number ");
	scanf("%d",&num);
	
	pos=search(a,0,n,num);
	if(pos==-1)
	 printf("\n Number not present ");
	else
	 printf("\n number present at index %d ",pos);
}
