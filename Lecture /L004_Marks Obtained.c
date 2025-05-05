//Lecture 03/04/2025
#include<stdio.h>
int main()
{
int phy,chem,maths,bio;
float avg,per;
printf("Enter the marks obtained in Physics: ");
scanf("%d",&phy);
printf("Enter the marks obtained in Chemistry: ");
scanf("%d",&chem);
printf("Enter the marks obtained in Mathematics: ");
scanf("%d",&maths);
printf("Enter the marks obtained in Biology: ");
scanf("%d",&bio);
sum=phy+chem+maths+bio;
printf("The total marks obtainedis %d\n",sum);
avg=sum/4.0;
printf("The average is %.2f\n",avg);
per=(sum/400)*100;
printf("The percentage obtained are %.2f%%\n",per);
return 0;
}
