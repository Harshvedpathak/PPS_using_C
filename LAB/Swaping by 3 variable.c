//17-04-25
//WAP to Swap contains of variable A and B
//With using extra variable C

#include <stdio.h>
int main()
{
	printf("Harsh Vijay Vedpathak\n24030331378026 \nVLSI Batch-B\n");
	
	int a,b,c;
	printf("Enter the Variable A :");
	scanf("%d", &a);
	printf("Enter the Variable B :");
	scanf("%d", &b);
	printf("Before Swapping A = %d and B =%d \v",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping A = %d and B =%d",a,b);
	
	return 0;
}
