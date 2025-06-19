#include<stdio.h>
void printArray(int arr[],int size);
int main()
{
	int a[3]={3,4,5};
	int b[4]={1,2,3,4};
	int d[7]={1,2,3,4,5,6,7};
	printArray(a,3);
	printf("\n");
	printArray(b,4);
	printf("\n");
	printArray(d,7);
	printf("\n");
	return 0;
}
	void printArray(int arr[],int size)
	{
		int i;
		for (i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}

