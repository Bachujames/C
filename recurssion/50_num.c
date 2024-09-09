#include<stdio.h>
void fun(int a)
{
    if(a>50)
    {
        return;
    }
    else
    { 
        printf("\n%d",a);
        fun(a+1);

    }

}
int main()
{
    fun(1);
}