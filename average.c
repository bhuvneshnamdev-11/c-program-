//To find average of three numbers
#include<stdio.h>
void main()
{
	int a,b,c,average;
	printf("Enter the value of three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	average = (a+b+c)/3;
	printf("average = %d",average);
}