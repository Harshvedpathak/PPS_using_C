// 2.1 To Calculate Area and Perimeter of Rectangle 
// Harsh Vedpathak_8026
#include<stdio.h>
int main()
{
    int l,b,a,p;
    
    printf("Enter the Length of Rectangle :");
    scanf("%d",&l);
    printf("Enter the Breath of Rectangle :");
    scanf("%d",&b);
    
    a=l*b;
    p=2*(l+b);
    
    printf("The Area of Given Rectangle is %d\n",a);
    printf("The Perimeter of Given Rectangle is %d\n",p);
    
    return 0;
}
