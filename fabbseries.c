//Loop Program : fibonacci series
#include<stdio.h>
void main()
{
     int n,i,a=-1,b=1,sum;
     printf("Enter the ending of series");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         sum=a+b;
         printf("%d\t",sum);
         a=b;
         b=sum;
     }
}
