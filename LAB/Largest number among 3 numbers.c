// WAP to find the largest number if Three numbers are entered through keyboard
//Harsh Vedpathak 8026
// 24-04-2025
#include <stdio.h>
int main()
{
    float num1,num2,num3,l ;
    printf("Enter first Number : ");
    scanf("%f",&num1);
    printf("Enter second Number : ");
    scanf("%f",&num2);
    printf("Enter third  Number : ");
    scanf("%f",&num3);
	
	if (num1>num2)
    {
    	l=num1;
	}
	else 
	{
    	l=num2;
    
	}
	
	 if(l>num3)
	{
    	printf("The entered number %.3f is largest number",l);
	}
	else
	{
		printf("The entered number %.3f is largest number",num3);
	}
	return 0;	
}
