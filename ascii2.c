//upper case to lower case
#include<stdio.h>
void main()
{
   char ch;
   printf("Enter any charector in upper case");
   scanf("%c",&ch);
   ch=ch+32;
   printf("Lower case chrector = %c\n",ch);
}
