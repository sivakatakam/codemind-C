#include<stdio.h>
int main()
{
    int t,m,a,i;
    scanf("%d%d%d",&t,&m,&a);
    for(i=m;i<=a;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}