#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,nd,f,l,c,s;
        scanf("%d",&n);
        nd=log10(n)+1;
        f=n%10;
        c=pow(10,nd-1);
        l=n/c;
        s=f+l;
        printf("%d
",s);
    }
}