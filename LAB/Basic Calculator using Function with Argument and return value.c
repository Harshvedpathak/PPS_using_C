#include <stdio.h>

int sum(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);
int main()
{
	int a,b,op;
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 2nd Number :");
	scanf("%d",&b);
	printf(" NOTE:\n Enter 1 for Addition\n Enter 2 for Substraction \n Enter 3 for Multiplication\n Enter 4 for Division.\n\n");
    printf("Enter the operation you want to Perform :");
    scanf("%d",&op);
    if (op==1)
    {
    	printf("Addition of %d and %d is %d",a,b,sum(a,b));
	}
	else if(op==2)
	{
    	printf("Substraction of %d and %d is %d",a,b,sub(a,b));
	}
	else if(op==3)
	{
    	printf("Multipliction of %d and %d is %d",a,b,mul(a,b));
	}
	else if(op==4)
	{
    	printf("Division of %d and %d is %d",a,b,div(a,b));
	}
	else
	{
		printf("Enter Correct Operation No as \"1\" / \"2\" / \"3\" / \"4\" ");
	}

	return 0;
}

int sum(int n1,int n2)
{
	int s1;
	s1=n1+n2;
	return s1;
}

int sub(int n1,int n2)
{
	int s2;
	s2=n1-n2;
	return s2;
}

int mul(int n1,int n2)
{
	int m;
	m=n1*n2;
	return m;
}

int div(int n1,int n2)
{
	int d;
	d=n1/n2;
	return d;
}
