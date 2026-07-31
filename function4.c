//Functions :with args and with return value
#include<stdio.h>
float add(float,float);
float add(float a,float b)
{
     return a+b;
}
void main()
{
     float a,b;
     printf("Enter the value of a and b: ");
     scanf("%f%f",&a,&b);
      /*res=add(a,b);
      printf("Sum = %f",res);*/
      printf("Sum = %f",add(a,b));
}
