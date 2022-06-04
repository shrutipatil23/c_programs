#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number to check whether the given number is even or odd : ");
  scanf("%d",&num);
  
  if(num%2==0)
  {
    printf(" \n The number is Even");
  }
  else
  {
    printf("\n The number is Odd");
  }
  printf(" \n THANKS!!");
  return 0;
}