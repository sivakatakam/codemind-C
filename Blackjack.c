#include<stdio.h>
int main()
{
    int a,b,c,t=21;
    scanf("%d%d",&a,&b);
    if((a+b)<11)
    {
        printf("-1");
    }
    else
    {
        c=t-(a+b);
        printf("%d",c);
    }
}