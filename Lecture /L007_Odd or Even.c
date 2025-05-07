//17-04-2025
//Lecture_WAP to find whether the number entered by user is odd or even
#include <stdio.h>
int main()
{
  int num,rem;
  printf("Enter the Number :");
  scanf("%d", &num);
  rem=num%2;
  if (rem==0)
  {
    printf("The entered Number %d is Even",num);
  }
  else
  {
    printf("The entered number %d is Odd",num);
  }
  return 0;
    
}
