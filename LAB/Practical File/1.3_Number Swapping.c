// 1.3 Number Swapping using 3 variables
// Harsh Vedpathak_8026

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First Number :");
	scanf("%d", &a);
	printf("Enter the Second Number :");
	scanf("%d", &b);
	printf("Before Swapping A = %d and B =%d \v",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping A = %d and B =%d",a,b);
	
	return 0;
}
