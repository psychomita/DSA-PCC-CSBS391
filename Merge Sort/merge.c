#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int lb, int mid, int ub)
{
	int i,j,k;
	int n1=mid-lb+1;
	int n2=ub-mid;
	int l[n1],u[n2];
	
	for(i=0;i<n1;i++) //copying data into temporary arrays
		l[i]=arr[lb+i];
	
	for(j=0;j<n2;j++) //copying data into temporary arrays
		u[j]=arr[mid+1+j];
	
	//merging the temporary arrays back into arr[]
	i=0;
	j=0;
	for(k=lb;i<n1 && j<n2;k++)
	{
		if(l[i]<=u[j])
		{
			arr[k]=l[i];
			i++;
		}
		else
		{
			arr[k]=u[j];
			j++;
		}
	}
	
	//copying remaining elements of l[] if any
	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;
	}
	
	//copying remaining elements of r[] if any
	while(j<n2)
	{
		arr[k]=u[j];
		j++;
		k++;
	}
}	
void sort(int arr[], int lb, int ub) //lb is the lower bound //ub is the upper bound
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2; //finding middle index
		sort(arr,lb,mid);
		sort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
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
