#include<stdio.h>
int main()
{
    int a,b,h;
    float t;
    scanf("%d%d%d",&a,&b,&h);
    t=((a+b)/2.0)*h;
    printf("%0.4f",t);
}