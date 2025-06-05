//Lab 29/05/2025
//24030331378026
//WAP for ATM pin if the pin is correct the output should Collect your cash, if the pin is wrong output should be Incorrect Pin. It should give maximum 3 attempts for wrong pin after that message should be display ATM Card has been blocked
#include<stdio.h>
int main()
{
	int pin, i, x=1122;
	printf("Note - PIN MUST BE NUMERIC\v");
	for (i=1; i<=3; i++)
	{
		printf("Enter Your ATM Pin : ");
		scanf("%d",&pin);
		if(pin==x)
		{
			printf("\nCollect Your Cash");
			break;
		}
		else if (i==3)
		{
			printf("ATM Card has been Blocked");
		}
		else if(x!=pin)
		{
			printf("\nIncorrect Pin Please Try Again !!!\n\n");
		}
	}
return 0;
}

