//Loop Program :sum of all digit of a no 
#include<stdio.h>
void main()
{
     int n,rev=0,rem;
     printf("Enter the no: ");
     scanf("%d",&n);
     do
     {
         rem = n%10;
         rev = (rev*10)+rem;
         n=n/10;
     }while(n>0);
printf("reverse of given no = %d",rev);
    
}
