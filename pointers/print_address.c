#include<stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("%d %p %p %p",*ptr,ptr,&a,&ptr);
}