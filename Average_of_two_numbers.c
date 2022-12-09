#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=(a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,c);
}