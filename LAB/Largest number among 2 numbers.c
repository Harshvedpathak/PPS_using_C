// WAP to find the largest number if two numbers are entered through keyboard
//Harsh Vedpathak 8026
// 24-04-2025#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter first Number : ");
    scanf("%f",&num1);
    printf("Enter second Number : ");
    scanf("%f",&num2);
    if(num1==num2)
    {
    	printf("both numbers are equal");
	}
	else if (num1>num2)
    {
    	printf("The entered number %.3f is largest number",num1);
	}
	else
	{
    	printf("The entered number %.3f is largest number",num2);
	}
	return 0;	
}
