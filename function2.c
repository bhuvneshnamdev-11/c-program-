//Functions :with args and no return value
#include<stdio.h>
void add(float,float);
void add(float p,float q)
{
    float sum;
    sum = p+q;   
    printf("Sum = %f",sum);
}
void main()
{
     float a,b,sum;
     printf("Enter the value of a and b: ");
     scanf("%f%f",&a,&b);
     add(a,b);//actual paramtere
}