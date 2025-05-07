#include <stdio.h>
int main()
{
  int num,rem;
  printf("Enter The Number :");
  scanf("%d", &num);
  rem=num%10;
  if (rem==0)
  {
    printf("The entered number %d is completely divisible by 10",num);
  }
  else
  {
    printf("The entered number %d is not completely divisible by 10",num);
  }
  return 0;
}
