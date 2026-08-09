//2-d Array input and output
#include<stdio.h>
void main()
{
    int r,c,i,j;
     printf("Enter the size of r and c: ");
     scanf("%d%d",&r,&c);
     int a[r][c],b[r][c],sum[r][c];
     printf("Enter the element of matrix 1\n");
     for(i=0;i<r;i++)//1<2
     {
        for(j=0;j<c;j++)//1<2
        {
           scanf("%d",&a[i][j]);//&a[1][1]
        }
     }   
         printf("Enter the element of matrix 2\n");
     for(i=0;i<r;i++)//1<2
     {
        for(j=0;j<c;j++)//1<2
        {
           scanf("%d",&b[i][j]);//&a[1][1]
        }
     }   
      printf("\nDisplay the element of matrix 1\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
     }   
      printf("\nDisplay the element of matrix 2\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
     }   
     //loop for add matrix
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
             sum[i][j]=a[i][j]+b[i][j];
        }
     }    
       printf("\nDisplay the element of matrix 3\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           printf("%d\t",sum[i][j]);
        }
        printf("\n");
     }       
}
