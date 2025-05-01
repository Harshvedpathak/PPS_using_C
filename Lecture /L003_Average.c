#include <stdio.h>
int main() 
{
    float num1,num2,avg;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);
    avg=(num1+num2)/2.0;
    printf("The average of %.2f and %.2f is %.2f", num1, num2, avg);
    return 0;
}
