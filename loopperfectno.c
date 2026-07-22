//Loop Program : factor
#include<stdio.h>
void main()
{
     int n,i,sum=0;
     printf("Enter the value n");
     scanf("%d",&n);
     printf("Factor of given no are : \n");
     for(i=1;i<=n;i++)
     {
         if(n%i==0)
           printf("%d\t",i);     
     }
     for(i=1;i<n;i++)
     {
         if(n%i==0)
            sum=sum+i;
              
     }
     if(sum==n)
        printf("\nNo is perfect\n");
      else
        printf("\nNo is not perfect\n");  
}