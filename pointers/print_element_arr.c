#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter any 5 elements in the array :");
    for(int i=0;i<5;i++)
    {
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);
    }

    int *ptr[5];
    *ptr[0]=arr[0];
    for(int j=0;j<5;j++)
    {
        printf("\nelement - %d : %d",j,*ptr[j]);


    }


    return 0;
     
}