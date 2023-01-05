#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c>0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}