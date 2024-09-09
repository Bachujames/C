#include<stdio.h>
int main()
{
    int max;
    int arr[4]={1,2,3,4};
    max=arr[1];
    if(max<arr[1])
    {
        max=arr[1];
    }
    if(max<arr[2])
    {
        max==arr[2];
    }
    if(max<arr[3])
    {
        max=arr[3];
    }
    if(max<arr[4])
    {
        max=arr[4];
    }
    printf("%d",max);
}