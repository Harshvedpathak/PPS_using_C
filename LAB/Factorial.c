//LAB_15/05/25
//WAP to get factorial of input number

#include <stdio.h>
int main()
{
  int i,f,fact;
  fact = 1 ;
  printf("Enter the number to get its Factotial: ");
  scanf("%d",&f);
  for (i=1;i<=f;i++)
    {
      fact = fact*i;
    }
  printf("The Factorial of %d is %d",f,fact);
return 0;
}
