//stucture in c
#include<stdio.h>
struct Emplyoee
{
   int eid;
   char ename[20];
   float esal;
}; 
int main()
{
   struct Emplyoee e1,*e;

    printf("Enter the detail of Emplyoee\n");
    printf("Enter the emplyoee id ");
    scanf("%d",&e1.eid);
    printf("Enter the emplyoee name ");
    scanf("%s",&e1.ename);
    printf("Enter the emplyoee sal ");
    scanf("%f",&e1.esal);
     e=&e1;
    printf("Display the details of emplyoee\n");
    printf("Eid = %d\n",e->eid);
    printf("Ename = %s\n",e->ename);
     printf("Esal = %f\n",e->esal);
     return 0;
} 
