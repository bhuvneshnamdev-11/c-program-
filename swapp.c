//swapping using a 3 varibale
#include<stdio.h>
void main()
{
  int a,b,c;
   printf("Enter the value of a and b");
   scanf("%d%d",&a,&b);
   printf("Before swapping value of a = %d\n",a);
   printf("Before swapping value of b = %d\n",b);
   //logic for swap a value
   c=a;
   a=b;
   b=c;
   printf("After swapping value of a = %d\n",a);
   printf("After swapping value of b = %d\n",b);
}
