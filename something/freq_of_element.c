#include<stdio.h>
int main()

{   int count ;
    int arr[5]={1,22,34,22};
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
    }
    printf("count is %d ",count);

}