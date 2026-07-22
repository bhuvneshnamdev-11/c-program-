//Loop Program : factor
#include<stdio.h>
void main()
{
     int n,i;
     printf("Enter the value n");
     scanf("%d",&n);
     printf("Factor of given no are : \n");
     for(i=1;i<=n;i++)
     {
         if(n%i==0)
           printf("%d\t",i);     
     }
     
}
