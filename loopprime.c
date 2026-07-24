//Loop Program :Prime
#include<stdio.h>
void main()
{
     int n,count=0,i=1;
     printf("Enter the no: ");
     scanf("%d",&n);
     while(i<=n)
     {
          if(n%i==0)
          {
             count++;
          }
          i++;
     }
     if(count==2)
        printf("NO is prime");
     else
        printf("NO is not prime");   
}
