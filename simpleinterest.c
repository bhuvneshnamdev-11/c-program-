//To find simple interest 
#include<stdio.h>
void main()
{
	float simpleInterest,PrincipleAmount,annualRate,timeduration;
	printf("Enter the Principle Amount: ");
	scanf("%f",&PrincipleAmount);
	printf("Enter the Annual Rate: ");
	scanf("%f",&annualRate);
	printf("Enter the Time Duration: ");
	scanf("%f",&timeduration);
	simpleInterest = (PrincipleAmount * annualRate * timeduration)/100;
	printf("Simple Interest = %f",simpleInterest);
}
