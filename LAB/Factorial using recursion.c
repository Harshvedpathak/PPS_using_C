#include <stdio.h>
int fact(int n);
int main()

{
	int num,result;
	printf("Enter number to get its factorial :");
	scanf("%d",&num);
	result=fact(num);
	printf("Factorial of %d is %d",num,result);
	return 0;
}
int fact (int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		n=n*fact(n-1);
		return n;
	}
}

