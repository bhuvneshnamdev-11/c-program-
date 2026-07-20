//Loop Program : print counting of natural nos from n to 1
#include<stdio.h>
void main()
{
     int n,i;
     printf("Enter the ending of series");
     scanf("%d",&n);
     for(i=n;i>=1;i--)
     {
        printf("%d\t",i);
     }
}
