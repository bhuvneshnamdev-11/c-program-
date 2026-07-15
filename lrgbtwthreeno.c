//to check largest between three digit number 
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	    if(a>c)
	    {
	        printf("A is largest");
	    }
	    else
	    {
	        printf("C is largest");
	    }
	}
	else
	{
	    if(b>c)
	    {
	        printf("B is largest");
	    }
	    else
	    {
	        printf("C is largest");
	    }
	}
}	
