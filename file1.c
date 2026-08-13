//file handlinfg : creation of file 
#include<stdio.h>
#include<stdlib.h>
void main()
{
     FILE *fp;
     
    fp = fopen("abc.txt","w");
    if(fp==NULL)
    {
      printf("Error in file creation!!!");
      exit(0);
    }
    
    printf("File Created Successfully!!!");
    fclose(fp);
}
