#include<stdio.h>
int main()
{
    float b,h,d,p,g;
    scanf("%f%f%f",&b,&h,&d);
    p=(b*12)/100;
    g=b+h+d+p;
    printf("%0.2f
%0.2f",p,g);
}