#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        long int n,m,x;
        scanf("%ld%ld",&n,&m);
        for(x=0;x<=m;x++)
        {
            if(x*x%m==n)
            {
                printf("%ld
",x);
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}