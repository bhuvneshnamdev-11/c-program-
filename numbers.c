// to check the number is positive, negative or zero
#include <stdio.h>
int main()
{
    float a;

    printf("Enter a number: ");
    scanf("%f", &a);

    if (a != 0)
    {
        if (a > 0)
        {
            printf("number is positive");
        }
        else
        {
            printf("number is negative");
        }
    }
    else
    {
        printf("number is zero");
    }

    return 0;
}
