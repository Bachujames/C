#include<stdio.h>
int  two_num(long*,long*);
int main()
{
    long int  a,b;
    printf("enter the number to find the sum by call by ref ");
    scanf("%d %d ",&a,&b);
    int sum= two_num(&a,&b);
    printf("\n the sum is :%d",sum);
    return 0;

}
int  two_num(long *p,long *m)
{
    int  summm= *p+*m;
    return summm ;
}