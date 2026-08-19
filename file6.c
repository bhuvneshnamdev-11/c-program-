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
    char ch[100];
    //single char
    fgets(ch,100,fp);
    printf("%s\n",ch);
    printf("Data read Successfully on file !!!");
    fclose(fp);
}
