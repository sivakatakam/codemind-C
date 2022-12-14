#include<stdio.h>
int main()
{
    int s,m,h,n,a;
    scanf("%d",&s);
    h=s/3600;
    n=s%3600;
    m=n/60;
    a=n%60;
    printf("H:M:S-%d:%d:%d",h,m,a);
}