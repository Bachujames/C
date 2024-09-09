#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter the number of element :\n");
    int n;
    scanf("%d",&n);
    int*ptr = (int*)malloc(n*sizeof(int));
    printf("now enter the number on wich you want to find the largest :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int j=0;j<n;j++)
    {
        printf("element:%d-%d\n",j,*(ptr+j));
    }
    int max =*ptr;
    for(int i=0;i<n;i++)
    {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
    }
    printf("the greatest number is : %d \n",max);

}