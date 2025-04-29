//WAP to find grade obtained by student if students enters marks through keyboard
//Harsh Vedpathak 8026
// 24-04-2025
#include <stdio.h>
int main()
{
    int per;
    printf("Enter the obtained Percentage:");
    scanf("%d",&per);
    if(per>100||per<0)
    {
    	printf("invalid marks, Enter valid Percentage obtained");
	}
	else if(per>=90)
    {
    	printf(" grade obtained is Excellent");
	}
	else if(per>=80)
    {
    	printf(" grade obtained is A");
	}
	else if(per>=70)
    {
    	printf(" grade obtained is B");
	}
	else if(per>=60)
    {
    	printf(" grade obtained is C");
	}
	else if(per>=50)
    {
    	printf(" grade obtained is D");
	}
	else if(per>=40)
    {
    	printf(" grade obtained is E");
	}
	else 
	{
    	printf(" grade obtained is FAIL");
	}
	return 0;
}
