#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    int x,nd,f,s,l,h,p1,p2;
    scanf("%lld%d",&n,&x);
    nd=log10(n)+1;
    p1=pow(10,x);
    f=n%p1;
    s=nd-x;
    p2=pow(10,s);
    l=n/p2;
    if(f>l)
    {
        h=f-l;
        printf("%d",h);
    }
    else
    {
        h=l-f;
        printf("%d",h);
    }
}