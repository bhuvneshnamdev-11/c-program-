//Array stucture in c
#include<stdio.h>
struct Emplyoee
{
   int eid;
   char ename[20];
   float esal;
}; 
void main()
{
    struct Emplyoee e1[5];
    int i;
    printf("Enter the detail of Emplyoee\n");
    for(i=0;i<5;i++)
    {
	printf("Enter the emplyoee id: ");
	scanf("%d",&e1[i].eid);
	getchar();
	    printf("Enter the emplyoee name: ");
        gets(e1[i].ename);
	printf("Enter the emplyoee sal: ");
	scanf("%f",&e1[i].esal);
     }
    printf("Display the details of emplyoee\n");
    for(i=0;i<5;i++)
    {
      printf("Eid = %d\n",e1[i].eid);
      printf("Ename = %s\n",e1[i].ename);
      printf("Esal = %f\n",e1[i].esal);
     }
} 
