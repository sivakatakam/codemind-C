#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--)
    {
        c=c+i;
    }
    printf("%d",c);
}