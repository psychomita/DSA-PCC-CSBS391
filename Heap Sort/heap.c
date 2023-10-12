#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void heapify(int arr[], int n, int i)
{
	int max=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[max])
		max=l;
	if(r<n && arr[r]>arr[max])
		max=r;
	if(max!=i)
	{
		swap(&arr[i], &arr[max]);
		heapify(arr,n,max);
	}
}
void sort(int arr[], int n)
{
	for(int i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}	
}	
int main()
{
	int n,i;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	int *arr=malloc(n*sizeof(int));
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	sort(arr,n);
	printf("The sorted elements are : \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
