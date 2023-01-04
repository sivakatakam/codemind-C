#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d%d",&t,&n);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}