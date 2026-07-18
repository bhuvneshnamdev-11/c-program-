//reverse of given 3-digit 
#include<stdio.h>
void main()
{
   int n,d1,d2,d3,rev;
   printf("Enter the value of n");
   scanf("%d",&n);
   d1=n/100;
   d2=(n/10)%10;
   d3=n%10;
   rev=d3*100+d2*10+d1*1;
   printf("Reverse  = %d\n",rev);
}
