#include<stdio.h>
int main()
{
    int n,e=0,o=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    if(e>o)
    {
        printf("%d",e-o);
    }
    else
    {
        printf("%d",o-e);
    }
}