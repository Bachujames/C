#include<stdio.h>
int fun(int p);
int main()
{
    int n;
    printf("enter the number you want to find the sum \n ");
    scanf("%d",&n);
    int result = fun(n);
    printf(" %d",result);
}
int fun(int p)
{
    int sum;
    if (p==0)
    {
        return 0;
    }
    else 
    {
        sum = p+fun(p-1);
        return sum;
    }
}