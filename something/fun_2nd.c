#include<stdio.h>
int avg(int a ,int b);
int main()
{
   int averge;
   int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);

    averge = avg(a,b);
    printf("avg is %d",averge);
    return 0;

}
int avg(int a, int b)
{

  
    int avgg ;

    avgg=((a+b)/2);
    return avgg;
    //printf("avg of the number = %d",avgg);
    
    
}