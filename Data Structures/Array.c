#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void insert(int a[], int *n)
{
	int p, num, i;
	printf("\n Enter the position ");
	scanf("%d", &p);
	if (p < 0 || p >= *n)
		printf("\n Invalid Index ");
	else
	{
		printf("\n Enter the number to be inserted ");
		scanf("%d", &num);
		for (i = *n - 1; i >= p; i--)
			a[i + 1] = a[i];

		a[p] = num; // place the numberg
		*n = *n + 1;
	}
}
void Delete(int a[], int *n)
{
	int p, numm, i;
	printf("\n Enter the position ");
	scanf("%d", &p);
	if (p < 0 || p >= *n)
		printf("\n Invalid Index ");
	else
	{
		for (i = p; i < *n - 1; i++)
			a[i] = a[i + 1];

		*n = *n - 1;
	}
}
void display(int a[], int n)
{
	int i;
	printf("\n Array Elements are \n");
	for (i = 0; i < n; i++)
	{
		printf("\n %d", a[i]);
	}
}
int main()
{
	int a[MAX], i, n, ch;
	printf("Enter No. of elements ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter the number ");
		scanf("%d", &a[i]);
	}
	while (1)
	{
		printf("\n\n 1 for Insert ");
		printf("\n 2 for Delete ");
		printf("\n 3 for Display ");
		printf("\n 4 for Exit ");
		printf("\n Enter the choice ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			insert(a, &n);
			break;

		case 2:
			Delete(a, &n);
			break;

		case 3:
			display(a, n);
			break;

		case 4:
			exit(1);

		default:
			printf("\n Oops! Wrong choice ");
		}
	}
}
