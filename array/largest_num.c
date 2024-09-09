#include<stdio.h>
int main()
{
    int arr[5]={5,5,64,44,100};
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}