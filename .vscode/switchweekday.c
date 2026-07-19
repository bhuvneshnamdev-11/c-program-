//switch case : name week days
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the Choice between 1 to 7");
    scanf("%d",&choice);
    switch(choice)
    {
         case 1 :
                printf("Monday\n");
                break;        
         case 2 :
               printf("Tuesday\n");
               break;
        case 3 :              printf("Wedensday\n");                      
	break;
	case 4 : 
	      printf("Thursday\n");
             break;
        case 5 :
             printf("Friday\n");
             break;
        case 6 : 
             printf("Saturday\n");
             break;
        case 7 :
             printf("Sunday");
            break;
        default :
            printf("Invalid Choice \n");   
            return 0; 
    }
}
