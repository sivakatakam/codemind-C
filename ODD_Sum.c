#include<stdio.h>
int main()
{
    int n,a[n],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}