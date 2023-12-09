#include<stdio.h>
#define MAX 100
void swap(int *x, int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void quicksort(int a[], int f, int l)
{
	int pivot,i,j;
	if(f<l)//multiple element
	{
		pivot=a[f];
		i=f,j=l;
		while(i<=j)
		{
			while(i<=j && pivot>=a[i])
			 i++;
			while(pivot<a[j])
			 j--;
			 
			if(i<j)
			 swap(&a[i],&a[j]);
		}
		swap(&a[f],&a[j]);
		quicksort(a,f,j-1);
		quicksort(a,j+1,l);
	}
}
int main()
{
	int a[MAX];
	int i,n;
	printf("Enter the size ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&a[i]);
	}
	printf("\n Before Sorting ");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
	
	quicksort(a,0,n-1);
	printf("\n After Sorting ");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
	
}
