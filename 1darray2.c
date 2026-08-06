//Array input and output
#include<stdio.h>
void main()
{
   int a[5],i;
   //input using loop
   printf("Enter the element of array\n");
   for(i=0;i<5;i++)
   {
         scanf("%d",&a[i]);
   }
   //dipslay using loop
   printf("Display the element of array\n");
   for(i=0;i<5;i++)
   {
         printf("%d\t",a[i]);
   }
}
