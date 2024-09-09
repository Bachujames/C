#include<stdio.h>
int main()
{
    printf("enter any two numbers ");
    int n,m;
    scanf("%d %d",&n,&m);
    int *ptr_n= &n,*ptr_m=&m;
    int sum =*ptr_m+*ptr_n;
    printf(" the sum of two numbers is %d",sum);
    return 0;
}