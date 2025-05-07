//17-04-2025
//Lecture_If a three digit number is input through keyboard
//write a program to calculate sum of its digits

#include <stdio.h>
int main()
{
  int num,r1,r2,r3,q1,q2,sum;
  printf("Enter the three digit number :");
  scanf("%d", &num);
  r1=num%10;
  q1=num/10;
  r2=q1%10;
  q2=q1/10;
  r3=q2%10;
  sum=r3+r2+r1;
  printf("The sum of three digit entered number is %d",sum);
  return 0;
}
