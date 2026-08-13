//file handlinfg :write data on file 
#include<stdio.h>
#include<stdlib.h>
int main()
{
     FILE *fp;
     fp = fopen("abc.txt","w");
    if(fp==NULL)
    {
      printf("Error in file creation!!!");
      exit(0);
    }
    char ch;
    printf("ENter any charector");
    scanf("%c",&ch);
    
    //write single char 
    fputc(ch,fp);
    printf("Data	 write Successfully!!!");
    fclose(fp);
    return 0;
}
