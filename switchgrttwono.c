//switch case : greater two number
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter the no");
    scanf("%d%d",&n1,&n2);
    
    switch(n1>n2)//0 or 1 
    {
        case 0 :
              printf("N2 is greater");
              break;
        case 1 :
             printf("N1 is greater");
    }
}
