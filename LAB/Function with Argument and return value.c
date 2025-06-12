#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 2nd Number :");
	scanf("%d",&b);
	printf("Addition of Num 1 and Num 2 is %d",sum(a,b));
	return 0;
}
int sum(n1,n2)
{
	int c;
	c=n1+n2;
	return c;
}
