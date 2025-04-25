//17-04-25
//WAP to swap contains of variable A and B 
//without using any extra variable 

#include <stdio.h>
int main()
{
	printf("Harsh Vijay Vedpathak\n24030331378026 \nVLSI Batch-B\n");
	
	int a,b;
	printf("Enter the Variable A \n");
	scanf("%d", &a);
	printf("Enter the Variable B \n");
	scanf("%d", &b);
	printf("Before Swapping A = %d and B =%d \v",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping A = %d and B =%d",a,b);
	
	return 0;
}
