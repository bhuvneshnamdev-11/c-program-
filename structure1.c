//stucture in c
#include<stdio.h>
struct Emplyoee
{
   int eid;
   char ename[20];
   float esal;
}; 
void main()
{
   struct Emplyoee e1;
   printf("Enter the detail of Emplyoee\n");
    printf("Enter the emplyoee id ");
    scanf("%d",&e1.eid);
    printf("Enter the emplyoee name ");
    scanf("%s",e1.ename);
    printf("Enter the emplyoee sal ");
    scanf("%f",&e1.esal);
    printf("Display the details of emplyoee\n");
    printf("Eid = %d\n",e1.eid);
    printf("Ename = %s\n",e1.ename);
     printf("Esal = %f\n",e1.esal);
} 
