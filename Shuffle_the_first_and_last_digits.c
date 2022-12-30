#include<stdio.h>
#include<math.h>
int main()
{
    int n,ld,nd,p,fd,a,b,c,r,rev=0,d,e;
    scanf("%d",&n);
    ld=n%10;
    nd=log10(n)+1;
    p=pow(10,nd-1);
    fd=n/p;
    a=ld*pow(10,nd-1);
    b=a+fd;
    c=b;
    while(b!=0)
    {
        r=b%10;
        rev=rev*10+r;
        b=b/10;
    }
    d=n-rev;
    e=c+d;
    printf("%d",e);
}