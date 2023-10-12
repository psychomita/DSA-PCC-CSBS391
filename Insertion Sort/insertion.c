#include<stdio.h>
#include<stdlib.h>
void ins_sort(int *arr, int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		
		//move elements of arr[] that are greater than key to one index ahead
		for(j=i-1;j>=0 && arr[j]>key;j-=1)
			arr[j+1]=arr[j];
		arr[j+1]=key;
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
	ins_sort(arr,n);
	printf("The sorted elements are : \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
	
