#include <stdio.h>
int sum(int a);
int main()

{
	int num,result;
	printf("Enter number to get Addition till that number from 0 : ");
	scanf("%d",&num);
	result=sum(num);
	printf("Summation of 0 to %d is %d",num,result);
	return 0;
}
int sum (int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		a=a + sum(a-1);
		return a;
	}
}

