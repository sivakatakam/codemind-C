#include<stdio.h>
int main()
{
    int l,u,i,count=0;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        if(i%2==0 && i%3==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}