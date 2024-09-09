#include<stdio.h>
long  two_num(long*,long*);
int main()
{
    long int  a,b;
    printf("enter the number to find the sum by call by ref ");
    scanf("%ld%ld",&a,&b);
    long  sum= two_num(&a,&b);
    printf("\n the sum is :%ld",sum);
    return 0;

}
long   two_num(long *p,long *m)
{
    long   sum= *p+*m;
    return sum ;
}