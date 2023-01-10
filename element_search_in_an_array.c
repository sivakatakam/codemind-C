#include<stdio.h>
int main()
{
    int n,b,res=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            res=1;
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