#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,av,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=av)
        {
            c++;
        }
    }
    printf("%d",c);
}