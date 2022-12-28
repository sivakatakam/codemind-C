#include<stdio.h>
int main()
{
    int n,l,r,rev=0,f,d;
    scanf("%d",&n);
    l=n%1000;
    while(l!=0)
    {
        r=l%10;
        rev=rev*10+r;
        l=l/10;
    }
    f=n/1000;
    d=f*1000+rev;
    printf("%d",d);
}