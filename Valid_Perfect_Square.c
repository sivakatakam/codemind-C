#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(n==i*i)
            {
                c=1;
            }
        }
        if(c==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}