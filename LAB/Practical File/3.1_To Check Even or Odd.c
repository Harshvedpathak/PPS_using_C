// To Check Even or Odd number
// Harsh Vedpathak_8026

#include <stdio.h>
int main()
{
    int num,rem;
  	printf("Enter the Number : ");
	  scanf("%d", &num);
	  rem=num%2;
	  if (rem==0)
	  {
		  printf("The entered number %d is even",num);
	  }
	  else
  	{
		  printf("The entered number %d is odd",num);
	  }	
	  return 0;
}
