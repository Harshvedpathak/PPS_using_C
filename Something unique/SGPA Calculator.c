//CGPA Calculator by Harsh Vijay Vedpathak | VLSI First Year | 24030331378026 
//UNDER PROGRESS..!
#include <stdio.h>
int main()
{
	float em1,ec,em,be3,es,dt,ec_lab,mech_lab,beee_lab,es_lab,ws,nss,sum;
	printf("NOTE - You must enter marks out of 100 including internal and external \n\n");
	printf("01. Enter the total marks obtained in EM1: ");
	scanf("%f",&em1);
	if (em1>100||em1<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("02. Enter the total marks obtained in Chemistry: ");
	scanf("%f",&ec);
	if (ec>100||ec<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("03. Enter the total marks obtained in Mechanics: ");
	scanf("%f",&em);
	if (em>100||em<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("04. Enter the total marks obtained in BEEE: ");
	scanf("%f",&be3);
	if (be3>100||be3<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("05. Enter the total marks obtained in Envormental Science: ");
	scanf("%f",&es);
	if (be3>100||be3<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("06. Enter the total marks obtained in DT: ");
	scanf("%f",&dt);
	if (dt>100||dt<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	//Major 6 Subjects input
	printf("\vNOTE - Now Enter the marks obtain in Practicals out of 100\nIF YOU DONT KNOW YOUR PRACTICAL MARKS PUT MARKS ABOVE 90 \n\n");
	printf("01. Enter the total marks obtained in Chemistry Practical: ");
	scanf("%f",&ec_lab);
	if (ec_lab>100||ec_lab<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("02. Enter the total marks obtained in Mechanics Practical: ");
	scanf("%f",&mech_lab);
	if (ec_lab>100||ec_lab<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("03. Enter the total marks obtained in BEEE Practical: ");
	scanf("%f",&beee_lab);
	if (beee_lab>100||beee_lab<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("04. Enter the total marks obtained in Envormental Science Practical: ");
	scanf("%f",&es_lab);
	if (es_lab>100||es_lab<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	//LAB inputs over...
	printf("\vNOTE - Now Enter the marks obtain in Elective Subjects out of 100\nIF YOU DONT KNOW YOUR MARKS PUT MARKS ABOVE 90 \n0 \n");
	printf("01. Enter the total marks obtained in Workshop: ");
	scanf("%f",&ws);
	if (ws>100||ws<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	printf("02. Enter the total marks obtained in NSS: ");
	scanf("%f",&nss);
	if (nss>100||nss<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***\n");
	}
	sum=em1+ec+em+be3+es+dt+ec_lab+mech_lab+beee_lab+es_lab+ws+nss;
	if (sum>1200||sum<0)
	{
		printf("\t\t*** INVALID MARKS CHECK AGAIN ***");
	}
        else
	{    
    		printf("\vWE WILL CONTINUE FORWARD\v");
	}
	//DONE WITH ALL INPUTS..!
	

	return 0;
}
