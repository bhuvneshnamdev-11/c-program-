//switch case : Even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no");
    scanf("%d",&n);
    
    switch(n%2)//0 or 1 remainder
    {
        case 0 :
              printf("No is even");
              break;
        case 1 :
             printf("NO is odd");
                break;
        default :
            printf("Invalid Choice \n");    
            return 0;
    }
}
