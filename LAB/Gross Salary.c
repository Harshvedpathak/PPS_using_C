// 17-04-2025
//Calculate Gross Salary of Ramesh if Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
#include <stdio.h>
int main()
{
    printf("Harsh Vijay Vedpathak\n24030331378026 \nVLSI Batch-B\n");
	
	float b_sal, d,hr,g_sal;
	
	printf("Enter the Basic Salary of Ramesh : ");
	scanf("%f", &b_sal);
	
	d=(40.0/100.0)*b_sal;
	hr=(20.0/100.0)*b_sal;
	
	g_sal=(b_sal+d+hr);
	printf("\vThe Gross Salary of Ramesh is %.2f",g_sal);
	
	return 0;
}
