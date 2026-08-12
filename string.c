//string problems
#include<stdio.h>
void main()
{
  char str[100],temp;
  int len=0,i,j;
  printf("Enter the srtrin");
  scanf("%s",str);
   printf("orignal string = %s\n ",str); 
  //find the length
  while(str[len]!='\0')
  {
    len++;
  }
  
  //sort the string
  for(i=0;i<len;i++)
  {
     for(j=i+1;j<len;j++)
     {
         if(str[i]>str[j])
         {
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
         }
     }
  } 
  printf("sorted string = %s\n ",str);
}
