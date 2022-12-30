#include<stdio.h>
int main()
{
    int n,i,j,t,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    if(n%2!=0)
    {
        i=(n-1)/2;
        printf("%d",a[i]);
    }
    else
    {
        c=n/2;
        i=c+(c-1)/2;
        printf("%d",a[i]);
    }
}