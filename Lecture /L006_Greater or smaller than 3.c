//Lecture 15/04/2025
// Example of if-else Statement
//WAP to Print "Greater" & "Smaller" if the given number is greater or Smaller than 3

#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if(num>3)
  {
    printf("Greater");
  }
  else
  {
    printf("Smaller");
  }
}
