#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number to print its table: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		j=i*n;
		printf("%d X %d = %d\n",n,i,j);
	}
	return 0;

}
