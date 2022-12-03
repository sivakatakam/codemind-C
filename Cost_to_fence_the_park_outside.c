#include<stdio.h>
int main()
{
    int l,b,w,c,ai,ao,af,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ai=l*b;
    ao=(l+2*w)*(b+2*w);
    af=ao-ai;
    tc=af*c;
    printf("%d",tc);
}