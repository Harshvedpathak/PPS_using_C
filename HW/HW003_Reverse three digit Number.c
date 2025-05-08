//17-04-2025 24030331378026
//HomeWork_ WAP to reverse three digit number.

#include <stdio.h>
int main()
{
  int num,rev_num;
  printf("Enter the three digit Number to reverse it :");
  scanf("%d", &num);
  rev_num=((num%10)*100+((num/10)%10)*10+num/100);
  printf("The reverse three digit number is %d",rev_num);
  return 0;
}
