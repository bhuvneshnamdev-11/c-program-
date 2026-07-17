//to calculate a si : p,r,t
#include<stdio.h>
void main()
{
   float p,r,t,si;
   printf("Enter the value of p,r, and t");
   scanf("%f%f%f",&p,&r,&t);
   si = (p*r*t)/100;
   printf("Simple intrest = %f",si);
}
