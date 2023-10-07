#include<stdio.h>
void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d", arr[i]);
		if(i>0)
			printf("x^%d",i);
		if(i<n-1)
			printf(" + ");
	}
}
int main()
{
	int m,n,i,max;
	printf("Enter the number of terms in first polynomial");
	scanf("%d", &m);
	printf("Enter the number of terms in second polynomial");
	scanf("%d", &n);
	int a[m],b[n];
	printf("Enter the coefficients of 1st polynomial in increasing order of exponents");
	for(i=0;i<m;i++)
		scanf("%d", &a[i]);
	printf("Enter the coefficients of 2nd polynomial in increasing order of exponents");
	for(i=0;i<n;i++)
		scanf("%d", &b[i]);
	printf("1st Polynomial is:-\n");
	print(a,m);
	printf("2nd Polynomial is:-\n");
	print(b,n);
	max=(m>n)?m:n;
	int sum[max];
	for(i=0;i<m;i++)
		sum[i]=a[i];
	for(i=0;i<n;i++)
		sum[i]+=b[i];
	printf("The resulting polynomial is:-\n");
	print(sum,max);
	return 0;
}
	
