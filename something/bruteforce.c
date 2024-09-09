#include<stdio.h>
int main()
{
    int target=9,num;
   int arr[5]={1,2,4,3,5};
   int j,i,found=0;
   for( i=0;i<=4;i++)
   {
    for( j=0;j<4;j++)
    {
        if(i!=j && arr[i]+arr[j]==9)
        {
            found=1;
            break;
             
        }
        
    }
    if(found==1)
        {
            break;
        }
   }
   printf("%d %d",arr[i] ,arr[j]);
}