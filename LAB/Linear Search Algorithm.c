#include<stdio.h>
int main()
{
	int a[7]={1,2,3,4,5,6,7},index=0,i;
	for (i=0;i<8;i++)
	{
		if(a[i]==4)
		{
			printf("The num is present at %d",i);
			index=1;
		}
    }
		if (index==0)
		{
			printf("4 not found");
		}
return 0;
}

