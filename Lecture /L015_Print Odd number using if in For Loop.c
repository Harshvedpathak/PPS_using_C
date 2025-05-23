//24-04-2025
//Lecture/HW_WAP to print all the Odd numbers between 0 & 10.
//Using if condition in For Loop

#include <stdio.h>
int main()
{
  int i ;
  printf("\nThe Odd Numbers between 0 to 10 Are :\n");
  for (i=0;i<=10;i++)
    {
      if(i % 2 != 0)
      printf("%d\n",i);
    }
  return 0;
}

  
