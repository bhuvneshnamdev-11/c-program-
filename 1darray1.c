//Array input and output
#include<stdio.h>
void main()
{
   int a[5]={10,20,30,40,50},i;
   //dipslay : Manual
   printf("First element = %d\n",a[0]);
   printf("Second element = %d\n",a[1]);
   printf("Thisrd element = %d\n",a[2]);   
   printf("Fourth element = %d\n",a[3]);
   printf("Fifth element = %d\n",a[4]);      
   //dipslaay using loop
   printf("Display the element of array\n");
   for(i=0;i<5;i++)
   {
         printf("%d\t",a[i]);
   }
}
