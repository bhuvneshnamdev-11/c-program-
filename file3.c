//file handling :data append on a file  
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp = fopen("pqr.txt","a");
    if(fp==NULL)
    {
      printf("Error in file creation!!!");
      exit(0);
    }
    char str[100];
    printf("Enter any string!!!");
    gets(str);
    fputs(str,fp);
    printf("Data Write Successfully on file !!!");
    fclose(fp);
}
