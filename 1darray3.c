//Array input and output
#include<stdio.h>
void main()
{
   int n,i;
   printf("Enter the no of element: ");
   scanf("%d",&n);
   int a[n];
   //input using loop
   printf("Enter the element of array\n");
   for(i=0;i<n;i++)
   {
         scanf("%d",&a[i]);
   }
   //dipslay using loop
   printf("Display the element of array\n");
   for(i=0;i<n;i++)
   {
         printf("%d\t",a[i]);
   }
}
