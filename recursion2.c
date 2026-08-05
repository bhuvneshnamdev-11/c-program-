//recursion : sum of digits
#include<stdio.h>
int sum(int n)
{
  if(n==0)
    return 0;
  else 
    return (n%10)+sum(n/10);
}
void main()
{
  int n;
  printf("ENter the value of n: ");
  scanf("%d",&n);
  printf("Sum of digits = %d\n",sum(n)); 
}
