//Functions :no args and with return value
#include<stdio.h>
float add();
float add()
{
     float a,b,sum;
     printf("Enter the value of a and b: ");
     scanf("%f%f",&a,&b);
     sum = a+b;   
      return sum;
}
void main()
{
      float res; 
      res=add();
      printf("Sum = %f",res);
}
