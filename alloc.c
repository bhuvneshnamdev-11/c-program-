//Dynamic memory alloc : array 
//calloc();
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,i ;
    printf("Enter the no of elements ");
    scanf("%d",&n);
    ptr = calloc(n,sizeof(int));
     if(ptr==NULL)
     {
	  printf("Error in memory allocation!!!");
          exit(0);
         //return;
     }
     printf("Enter the elements of array: ");
     for(i=0;i<n;i++)
     {
        scanf("%d",(ptr+i));
     }
      printf("Display the elements of array\n");
     for(i=0;i<n;i++)
     {
        printf("%d\t",*(ptr+i));
     }
     free(ptr);
}
