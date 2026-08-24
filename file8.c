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
    int i=0;
    char str[100];
    //single char
 while((ch = fgetc(fp))!=EOF && ch!='\n')
    {
  	   str[i]=ch;
  	   i++;  
    }
    str[i]='\0';
    printf("%s",str);
    printf("Data read Successfully on file !!!");
    fclose(fp);
}
