#include<stdio.h>
int main()
{
    int s,t,b,c,kb;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    kb=c/1024;
    printf("%dkb",kb);
}