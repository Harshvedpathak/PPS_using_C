// 17-04-2025
//Write a program to calculate Area and Perimeter of a rectangle if
//its length and breath are input through the keyboard 

#include <stdio.h>
int main()
{
	printf("Harsh Vijay Vedpathak\n24030331378026 \nVLSI Batch-B\n");
	
	int l,b,area,perimeter;
	
	printf("Enter the Length \n");
	scanf("%d", &l);
	printf("Enter the breath \n");
	scanf("%d", &b);
	
	area=l*b;
	perimeter=2*(l+b);
		
	printf("The Area of Rectangle is %d \n" ,area);
		
	printf("The Perimeter of Rectangle is %d",perimeter);
	return 0;
}
