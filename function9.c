//Functions : with args and no return value
//Swapping using call by address 
#include<stdio.h>
void swapp(int*,int*);
void swapp(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
    printf("After swapping value of a in function defination = %d\n",*a);
    printf("After swapping value of b in function defination = %d\n",*b);
    
}
void main()
{
   int a,b;
   printf("Enter the value of a and b");
   scanf("%d%d",&a,&b);
   printf("Before swapping value of a in main = %d\n",a);
    printf("Before swapping value of b in main = %d\n",b);
    
    swapp(&a,&b);
    
     printf("After swapping value of a in main = %d\n",a);
      printf("After swapping value of b in main = %d\n",b);
}
