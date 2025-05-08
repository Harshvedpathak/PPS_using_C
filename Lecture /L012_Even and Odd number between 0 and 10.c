//24-04-2025
//Lecture_WAP to print all the Even numbers between 0 & 10.

#include <stdio.h>
int main()
{
  int i;
  printf("The Even Numbers between 0 to 10 Are :\n");
  for (i=0;i<=5;i++)
    {
      printf("%d\n",i*2);
    }
  printf("\nThe Odd Numbers between 0 to 10 Are :\n");
  for (i=0;i<=4;i++)
    {
      printf("%d\n",i*2+1);
    }
  return 0;
}
