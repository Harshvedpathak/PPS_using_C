//PPS Lab 22/05/25
//WAP to print first 15 number of Fibonacci Series.

#include <stdio.h>
int main()
{
	int num1, num2, nextNum;
	num1 = 0 ;
	num2 = 1 ;
	printf("Fibonacci Series: ");
	for (int i = 1; i <= 15; ++i)
		{
			printf("%d\n", num1);
        		nextNum = num1 + num2;
        		num1 = num2;
        		num2 = nextNum;
		}
	return 0;
}

    
