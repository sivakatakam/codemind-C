#include<stdio.h>
int main()
{
    int d,w,y,n;
    scanf("%d",&d);
    y=d/365;
    n=d%365;
    w=n/7;
    printf("%d
%d",y,w);
}