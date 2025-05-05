//Homework-WAP to Display grade achived by student 
// 24030331378026
// 15-04-2025
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
	else if(per>=80)
    {
    	printf("A Grade");
	}
	else if(per>=70)
    {
    	printf("B Grade");
	}
	else if(per>=60)
    {
    	printf("C Grade");
	}
	else if(per>=50)
    {
    	printf("D Grade");
	}
	else if(per>=40)
    {
    	printf("E Grade");
	}
	else 
	{
    	printf(" FAIL");
	}
	return 0;
}
