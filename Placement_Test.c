#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n,c,p;
        scanf("%d%d",&x,&n);
        c=x/10;
        p=c*n;
        printf("%d
",p);
    }
}