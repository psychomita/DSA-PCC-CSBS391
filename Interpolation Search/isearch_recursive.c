//binary search recursive
#define MAX 100
#include<stdio.h>
int search(int a[],int b, int e, int num)
{
	int mid=b+(e-b)*((num-a[b])/(a[e]-a[b]));
	if(b>e)//base case
	 return -1;
	else if(a[mid]==num)
	 return mid;
	else if(num>a[mid])
	 return search(a,mid+1,e, num);// recursive statement
	else
	 return search(a,b,mid-1, num);// recursive statement
	
}
int main()
{
	int a[MAX];
	int i, n, num,pos;
	printf("Enter number of elements ");
	scanf("%d",&n);
	printf("\n Enter the numbers in ascending order \n");
	for(i=0;i<n;i++)
	{
		printf("\n Enter number ");
		scanf("%d",&a[i]);
	}
	printf("\n Enter the search number ");
	scanf("%d",&num);
	
	pos=search(a,0,n-1,num);
	if(pos==-1)
	 printf("\n Number not present ");
	else
	 printf("\n number present at index %d ",pos);
}
