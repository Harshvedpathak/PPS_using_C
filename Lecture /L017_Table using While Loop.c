//22-05-2025
//Lecture_WAP to print Table of any number using while loop

#include <stdio.h>
int main()
{
	int i,t,num;
	printf("Enter number to print its Table :");
	scanf("%d",&num);
	i=1;
	while(i<=10)
		{
			t=num*i;
			printf("%d X %d = %d\n",num,i,t);
			i++;
		}
	return 0;
}
