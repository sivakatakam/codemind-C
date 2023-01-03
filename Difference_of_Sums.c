#include<stdio.h>
int main()
{
    int n,i,s=0,sq,sqs=0,ss;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        sq=i*i;
        sqs=sqs+sq;
    }
    ss=s*s;
    printf("%d",ss-sqs);
}