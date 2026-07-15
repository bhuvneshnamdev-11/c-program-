//to check whether the person is eligible to vote 
#include<stdio.h>
void main()
{
	int voter;
	printf("Enter the value of age of voter");
	scanf("%d",&voter);
	if(voter>=18)
	{
	    printf("eligible to vote");
	}
	else
	{
	    printf("not eligible to vote");
	}
}
