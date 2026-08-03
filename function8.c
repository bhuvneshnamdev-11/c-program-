//functions using call by address:
//addition with args and no return value
#include<stdio.h>
void add(int*, int*);
void add(int *a,int *b)//1000,1004
{
  int sum;
  sum=*a+*b;//*1000+*1004
  printf("Sum = %d",sum);
}
void main()
{
    int a,b;
    printf("ENter the value of a and b");
    scanf("%d%d",&a,&b);
    add(&a,&b);//call by add
    //add(1000,1004)
}
