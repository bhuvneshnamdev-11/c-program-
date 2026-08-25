//file delete
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int status;
   status=remove("abc.txt");
   if(status==0)
     printf("File deleted succesfully!!!!");
    else
     printf("File is not deleted succesfully!!!!");
}
