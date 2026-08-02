//Functions : with args and no return value
//perfect no 
#include<stdio.h>
void check(int);
void check(int n)
{
  int i,sum=0;
  for(i=1;i<n;i++)
  {
     if(n%i==0)
       sum=sum+i;
  }
  if(sum==n)
    printf("No is perfect");
  else
    printf("No is not perfect");  
}
void main()
{
   int n;
   printf("Enter any no: ");
   scanf("%d",&n);
   check(n);//call by value
}
