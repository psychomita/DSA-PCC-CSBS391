#include <stdio.h>
#define max 100
int HornerR( int a[], int n, int x, int index );
int main ()
{
    int a[max], n, x, index=0,i;
    printf("Enter the degree of the polynomial : "); 
    scanf("%d", &n);
    printf("Enter the cofficients :-\n");
    for (i=0;i<=n;i++){
        printf("a%d = ", i); 
        scanf("%d", &a[i]);
    }
    printf("Enter the value of x : "); scanf("%d",&x);
    printf("The value of p(%d) by Horner's Rule is %d" ,x,HornerR(a,n,x,index));
    return 0;
}
int HornerR( int a[], int n, int x, int index )
{
    if (index==(n)) 
        return a[n];
    else  
        return x*HornerR(a,n ,x,index+1) + a[index];
}
