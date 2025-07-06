// Find Fibonacci Number (First 15) (Using For Loop)
// Harsh Vedpathak_8026

#include <stdio.h>
int main()
{
	int num1, num2, nextNum;
	num1 = 0 ;
	num2 = 1 ;
	printf("Fibonacci Series: ");
	for (int i = 1; i <= 15; ++i)
		{
			printf("\n%d", num1);
    	nextNum = num1 + num2;
      num1 = num2;
      num2 = nextNum;
		}
	return 0;
}
