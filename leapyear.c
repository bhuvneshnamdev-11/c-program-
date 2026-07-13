//to check wheather the year is leap year or not
#include <stdio.h>
int main() {
    int a;
    printf("enter the year: ");
    scanf("%d",&a);
    if(a%4==0)
        printf("it is a leap year");
    else
        printf("it is not a leap year");
}