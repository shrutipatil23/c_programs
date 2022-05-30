#include <stdio.h>
int main()
{
  int num;
  Up:
  printf("\n Enter the number to check whether it is positive or negative : ");
  scanf("%d",&num);
  if(num==0)
    {
      printf("\n You have entered the number zero '0' which is a NEUTRAL number ");
      printf("\n Please enter another number");
      goto Up;
    }
   else if(num>0)
    { 
      printf("\n The number is POSITIVE");
    }
   else
    {
      printf("\n The number is NEGATIVE");
    }
    
    printf("\n THANKS!!!");
    return 0;
}