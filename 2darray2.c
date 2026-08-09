//2-d Array input and output
#include<stdio.h>
void main()
{
    int r,c,i,j,sum=0;
     printf("Enter the size of r and c ");
     scanf("%d%d",&r,&c);
     int a[r][c];
     if(r==c)
     {
     printf("Enter the element of matrix\n");
     for(i=0;i<r;i++)//1<2
     {
        for(j=0;j<c;j++)//1<2
        {
           scanf("%d",&a[i][j]);//&a[1][1]
        }
     }   
      printf("Display the element of matrix\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
    	    if(i==j)
    	    sum=sum+a[i][j];	
        }
        printf("\n");
     }   
     printf("\nsum of diagonal element = %d\n",sum);
     }
     else
       printf("Invalid Matrix !!!!");
}
