#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int partition(int arr[], int lb, int ub) //partitioning using pivot element
{ 
	int pivot=arr[ub]; //choosing pivot element
	int i=lb-1,j;
	for(j=lb;j<=ub-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[ub]);
	return(i+1);
}
void sort(int arr[], int lb, int ub) //lb is the lower bound //ub is the upper bound
{				      
	if(lb<ub)
	{
		int part=partition(arr,lb,ub); //part is the partitioning index
		sort(arr,lb,part-1);
		sort(arr,part+1,ub);
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
	sort(arr,0,n-1);
	printf("The sorted elements are : \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
