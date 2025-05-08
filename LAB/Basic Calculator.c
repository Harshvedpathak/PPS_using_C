//03-04-2025
//LAB_Basic Calculator 
#include <stdio.h>
int main()
{
  int a,b,add,sub,mul;
  printf("Enter the 1st Number :");
  scanf("%d",&a);
  printf("Enter the 2nd Number :");
  scanf("%d",&b);
  add=a+b;
  sub=a-b;
  mul=a*b;
  printf("The addition of %d + %d is %d \n", a, b, add);
  printf("The substraction of %d - %d is %d \n ", a, b, sub);
  printf("The multipliction of %d * %d is %d \n", a, b, mul);
  return 0;
}
