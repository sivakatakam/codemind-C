#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],s=0,avg,res=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            res=1;
            break;
        }
    }
    if(res==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}