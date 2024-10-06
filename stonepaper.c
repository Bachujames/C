#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int game(char you,char computer )
{
    if (computer == you )
    {
        return 0;
    }
    //stone vs  paper
    if(computer == 's' && you =='p')
       {
        return 1;
       }

        else if(computer =='p'&& you =='s')
               {
                return -1;
               }
     // scissor vs stone 
     if (computer =='z'&& you =='s')
     {
        return 1;
     }
        else if(computer =='s' && you == 'z')
        {
            return -1;
        }  
   //scissor vs paper 
   if(computer == 'z'&& you == 'p')
   {
     return 1;
   }  
   else if(computer =='p' && you == 'z')
   {
    return -1;
   }
}
int main()
{
    int result;
    ;char you,computer;
    printf("play stone paper scissor s for stone p for paper and z for scissor ");
    scanf("%c",&you);
    
    srand(time(NULL));

    int n =rand()%100;

    if(n<=33)
     computer ='s';
    if(n>=33 && n<=66)
     computer ='p';
    else
     computer ='z';
    
  result= game(you,computer);

  if(result == 1)
  printf(" you won the game \n");
  if(result == 0)
  printf("both you and computer are tie\n");
  if(result == -1)
  printf("you lost the game ");


}