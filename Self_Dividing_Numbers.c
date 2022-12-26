#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int n,r,c=0,d=0;
        n=i;
        while(n)
        {
            r=n%10;
            n=n/10;
            c++;
            if(r!=0&&i%r==0)
            {
                d++;
            }
        }
        if(c==d)
        {
            printf("%d ",i);
        }
    }
}