//Nested Loop :prime no series
#include<stdio.h>
void main()
{
     int n,i,j,count;
     printf("Enter the no: ");
     scanf("%d",&n);
     //1 to 50
     for(i=1;i<=n;i++)
     {
         count=0;
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             {
                count++;
             }
         }
         if(count==2 || i==1)
          printf("%d\t",i);
     }
}
