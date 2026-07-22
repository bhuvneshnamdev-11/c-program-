//Loop Program : factorial
#include<stdio.h>
void main()
{
     int n,i,f=1;
     printf("Enter the value n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         f=f*i;
     }
     printf("Factorial = %d\n",f);
}
