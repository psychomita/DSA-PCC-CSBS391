#include<stdio.h>
#define MAX 100
void sort(int a[], int f, int m, int l)
{
	int temp[MAX];
	int i=f,j=m+1,k=f,x;
	while(i<=m && j<=l)
	{
		if(a[i]<a[j])
		 temp[k++]=a[i++];
		else if(a[j]<a[i])
		 temp[k++]=a[j++];
		else
		{
			temp[k++]=a[i++];
			temp[k++]=a[j++];
		}
	}
	if(i>m)
	{
		for(x=j;x<=l;x++)
		 temp[k++]=a[x];
	}
	else
	{
		for(x=i;x<=m;x++)
		 temp[k++]=a[x];
	}
	for(x=f;x<=l;x++)
		 a[x]=temp[x];
}
void merge(int a[], int f, int l)
{
	int m;
	if(f<l)
	{
		m=(f+l)/2;
		merge(a,f,m);
		merge(a,m+1,l);
		sort(a,f,m,l);
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
	
	merge(a,0,n-1);
	printf("\n After Sorting ");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
	
}
