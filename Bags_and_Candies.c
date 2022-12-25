#include<stdio.h>
int main()
{
    int n,k,m,y;
    scanf("%d%d%d",&n,&k,&m);
    y=n/(m*k);
    if(n%(m*k)!=0)
    {
        y++;
    }
    printf("%d",y);
}