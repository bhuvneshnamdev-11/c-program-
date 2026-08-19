//file handling :data read on a file  
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp = fopen("abc.txt","r");
    if(fp==NULL)
    {
      printf("file not exist!!!");
      exit(0);
    }
    char ch;
    //single char
    ch=fgetc(fp);
    printf("char = %c\n",ch);
    printf("Data Write Successfully on file !!!");
    fclose(fp);
}
