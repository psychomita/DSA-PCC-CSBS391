#include<stdio.h>
#define MAX 100
void swap(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void buildheap(int a[], int n, int i)
{
	int large=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[left]>a[large])
	 large=left;
	
	if(right<n && a[right]>a[large])
	 large=right;
	 
	if(i!=large)
	{
		swap(&a[i],&a[large]);
		buildheap(a,n,large);
	}
	
}
void sort(int a[], int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		buildheap(a,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		swap(&a[i],&a[0]);
		buildheap(a,i,0);
	}
}
int main()
{
	int a[MAX];
	int n,i;
	printf("\n Enter number of elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the number ");
		scanf("%d",&a[i]);
	}
	printf("\n Before Sorting ");
	for(i=0;i<n;i++)
		printf(" %d", a[i]);
		
	sort(a,n);//funtion call
	
	printf("\n After Sorting ");
	for(i=0;i<n;i++)
		printf(" %d", a[i]);
	
}
