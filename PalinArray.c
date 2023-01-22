#include<stdio.h>
int pal(int n)
{
    int r,s=0,n1;
    n1=n;
    while(n!=0)
    {
        r=n%10;;
        s=s*10+r;
        n=n/10;
    }
    if(n1==s)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i,x,c=0,n1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        n1=a[i];
        x=pal(n1);
        if(x==1)
        c++;
    }
    if(c==n)
    printf("1");
    else
    printf("0");
}