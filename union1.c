//structure vs uunion :
//size 
#include<stdio.h>
struct Emplyoee
{
   int eid;
   char ename[20];
   float esal;
}; 
union Emplyoee1
{
   int eid;
   char ename[20];
   float esal;
}; 
int main()
{
   printf("Sizeof structure = %d\n",sizeof(struct Emplyoee));
   
   printf("Sizeof union = %d\n",sizeof(union Emplyoee1));
   return 0;
}
