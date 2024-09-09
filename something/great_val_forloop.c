#include<stdio.h>
int main()
{
    int arr[5]={1,2,34,4,55};
    int max=arr[1];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            printf(" %d",max);
        }
    }
    printf("\n %d",max);
}