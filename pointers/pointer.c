#include<stdio.h>
int main()
{
    char b='s';
    char*p=&b;
    printf("%c %x %x",*p,p,&p);
}