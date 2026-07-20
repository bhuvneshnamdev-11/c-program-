//Loop Program : print counting of even natural nos from 1 to n
#include<stdio.h>
void main()
{
     int n,i;
     printf("Enter the ending of series");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       if(i%2==0)
         printf("%d\t",i);
     }
}
