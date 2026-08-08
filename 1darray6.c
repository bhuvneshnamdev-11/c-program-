//reverse of an array
#include<stdio.h>
void main()
{
   int n,i,max;
   printf("Enter the no of element: ");
   scanf("%d",&n);
   int a[n];
   //input using loop
   printf("Enter the element of array\n");
   for(i=0;i<n;i++)
   {
         scanf("%d",&a[i]);
   }
   max=a[0];
   //dipslay using loop
   printf("Display the element of orignal array\n");
   for(i=0;i<n;i++)
   {
         printf("%d\t",a[i]);
   }
   //loop to find max element in array
   for(i=0;i<n;i++)
   {
     if(max<a[i])
     {
        max=a[i];
     }
   }
   printf("\nMax elementof array = %d",max);
   
}
