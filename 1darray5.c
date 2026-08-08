//reverse of an array
#include<stdio.h>
void main()
{
   int n,i,temp;
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
   printf("Display the element of orignal array\n");
   for(i=0;i<n;i++)
   {
         printf("%d\t",a[i]);
   }
   //loop to reverse an array
   for(i=0;i<n/2;i++)
   {
       temp=a[i];
       a[i]=a[n-1-i];
       a[n-1-i]=temp;
   }
   //dipslay using loop
   printf("\nDisplay the element of reverse array\n");
   for(i=0;i<n;i++)
   {
         printf("%d\t",a[i]);
   }  
   
}
