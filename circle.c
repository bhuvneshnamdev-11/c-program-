//to calculate a area of circle : r
#include<stdio.h>
#define PI 3.14
void main()
{
   float r,area;
   printf("Enter the value of radius");
   scanf("%f",&r);
   //area = 3.14*r*r;
   area = PI*r*r;
   printf("Area = %.2f",area);
}
