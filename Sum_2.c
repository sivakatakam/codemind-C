#include<stdio.h>
int main()
{
    int a,b,x,y,i,s=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}