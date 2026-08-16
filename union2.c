//structure vs uunion :
//data access 
#include<stdio.h>
union Emp
{
   int eid;
   float esal;
}; 
int main()
{
     union Emp e1;
     printf("Enter Emp id: ");
     scanf("%d",&e1.eid);
     printf("Enter Emp sal: ");
     scanf("%f",&e1.esal);
     printf("Display the detail of emp\n");
     printf("Eid = %d\n",e1.eid);
     printf("Esal = %f\n",e1.esal);
     return 0;
}
