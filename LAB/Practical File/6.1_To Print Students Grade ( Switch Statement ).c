// 6.1 To Print Students Grade Using The Switch Statement.
// Harsh Vedpathak_8026.

#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter Student's Marks out of 100 : ");
    scanf("%d",&marks);
    if (marks < 0 ||marks > 100)
    {
        printf("Invalid Marks");
        return 1;
    }
    
    switch(marks/10)
    {
        case 10:
        case 9:
        printf("EX Grade");
        break;
        case 8:
        printf("A Grade");
        break;
        case 7:
        printf("B Grade");
        break;
        case 6:
        printf("C Grade");
        break;
        case 5:
        printf("D Grade");
        break;
        case 4:
        printf("E Grade");
        break;
        default:
        printf("FAIL");
        break;
    }
    return 0;
}
