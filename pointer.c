//pointers :
#include<stdio.h>
void main()
{
    int a=10,*p,**q;
    printf("value of a =%d\n",a);
    printf("address of a =%u\n",&a);
    p=&a;
    printf("value of p =%u\n",p);
    printf("value of a using *p=%d\n",*p);
    printf("address of p =%u\n",&p);
    q=&p;
    printf("value of q =%u\n",q);
    printf("value of p using **Qs =%u\n",*q);
    printf("value of a using a **q=%d\n",**q);
    printf("address of q =%u\n",&q);
}
