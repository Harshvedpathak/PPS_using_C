// 4.1 Find Factorial of Number (While Loop).
// Harsh Vedpathak_8026

#include <stdio.h>
int main()
{
    int i=1, f, fact=1;
  
    printf("Enter the number to get its Factotial: ");
    scanf("%d",&f);
    while (i<=f)
      {
        fact = fact*i;
        i++;
      }
    printf("The Factorial of %d is %d",f,fact);
    return 0;
}
