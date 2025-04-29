//CGPA Calculator by Harsh Vijay Vedpathak | VLSI First Year | 24030331378026 
//UNDER PROGRESS..!
#include <stdio.h>
int main()
{
    float em1,ec,em,be3,es,dt,ec_lab,mech_lab,beee_lab,es_lab,ws,nss,sum;
	
  	printf("NOTE - You must enter marks out of 100 including internal and external \n\n");
  	printf("01. Enter the total marks obtained in EM1: ");
    scanf("%f",&em1);
  	printf("02. Enter the total marks obtained in Chemistry: ");
    scanf("%f",&ec);
    printf("03. Enter the total marks obtained in Mechanics: ");
    scanf("%f",&em);
    printf("04. Enter the total marks obtained in BEEE: ");
    scanf("%f",&be3);
    printf("05. Enter the total marks obtained in Envormental Science: ");
    scanf("%f",&es);
    printf("06. Enter the total marks obtained in DT: ");
    scanf("%f",&dt);
    printf("\vNOTE - Now Enter the marks obtain in Practicals out of 100\nIF YOU DONT KNOW YOUR PRACTICAL MARKS PUT MARKS ABOVE 90 \n\n");
    printf("01. Enter the total marks obtained in Chemistry Practical: ");
    scanf("%f",&ec_lab);
    printf("02. Enter the total marks obtained in Mechanics Practical: ");
    scanf("%f",&mech_lab);
	  printf("03. Enter the total marks obtained in BEEE Practical: ");
    scanf("%f",&beee_lab);
    printf("04. Enter the total marks obtained in Envormental Science Practical: ");
    scanf("%f",&es_lab);
    printf("\vNOTE - Now Enter the marks obtain in Elective Subjects out of 100\nIF YOU DONT KNOW YOUR MARKS PUT MARKS ABOVE 90 \n0 \n");
    printf("01. Enter the total marks obtained in Workshop: ");
    scanf("%f",&ws);
    printf("02. Enter the total marks obtained in NSS: ");
    scanf("%f",&nss);
    sum=em1+ec+em+be3+es+dt+ec_lab+mech_lab+beee_lab+es_lab+ws+nss;
	if (sum>1200||sum<0)
    {
    	printf("\t\t*** INVALID MARKS CHECK AGAIN ***");
	}
    else
    {
    	printf("\vWE WILL CONTINUE FORWARD\v");
	}


	return 0;
}
