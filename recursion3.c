//recursion : multiplication table
#include<stdio.h>
void table(int n,int i)
{
  if(i<=10)
  {
     printf("%d*%d=%d\n",n,i,n*i);
      table(n,i+1);
  }  

}
void main()
{
  int n,i=1;
  printf("ENter the value of n:");
  scanf("%d",&n);
   table(n,i);  
}
