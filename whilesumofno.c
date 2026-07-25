//Loop Program :sum of all digit of a no 
#include<stdio.h>
void main()
{
     int n,sum=0,rem;
     printf("Enter the no: ");
     scanf("%d",&n);
     while(n>0)
     {
         rem = n%10;
         sum = sum+rem;
         n=n/10;
     }
printf("Sum of all digits of given no = %d",sum);
    
}
