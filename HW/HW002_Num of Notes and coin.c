//17-04-2025 24030331378026
//HomeWork_ WAP to find numbers of 100 Rs. notes, 10 Rs. notes & 1 Rs. coins 
//Requried to give to customer if customer enters three digit amount through keyboard

#include <stdio.h>
int main()
{
  int amt,r1,r2,r3;
  printf("Enter the three digit amount :");
  scanf("%d", &amt);
  r1=amt/100;
  amt=amt%100;
  r2=amt/10;
  r3=amt%10;
  printf("Number of 100 Rs. Notes :%d\nNumber of 10 Rs. Notes :%d\nNumber of 1 Rs. Coins:%d",r1,r2,r3);
  return 0;
}
