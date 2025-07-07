// 8.1 Basic Calculator Using Function.
// Harsh Vedpathak_8026

#include <stdio.h>

int sum(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int quo(int n1, int n2);
int main()
{
    int a,b,op;
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	printf("Enter 2nd Number : ");
	scanf("%d",&b);
	printf("\nAddition of %d and %d is %d \n\n",a,b,sum(a,b));
	printf("Substraction of %d and %d is %d \n\n",a,b,sub(a,b));
	printf("Multipliction of %d and %d is %d\n\n",a,b,mul(a,b));
	printf("quotient of %d and %d is %d\n\n",a,b,quo(a,b));
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

int quo(int n1,int n2)
{
	int d;
	d=n1/n2;
	return d;
}
