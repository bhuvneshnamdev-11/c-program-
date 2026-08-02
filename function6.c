//Functions : with args and no return value
//perfect no 
#include<stdio.h>
int check(int);
int check(int n)
{
  int i,sum=0;
  for(i=1;i<n;i++)
  {
     if(n%i==0)
       sum=sum+i;
  }
  if(sum==n)
   return 1;
  else
    return 0; 
}
void main() 
{
   int n,res;
   printf("Enter any no: ");
   scanf("%d",&n);
   res=check(n);//call by value
    if(res==1)
      printf("No is perfect"); 
    else
      printf("No is not perfect"); 
}
