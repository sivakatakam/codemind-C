#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    while(1)
    {
        if(max%a==0&&max%b==0)
        {
            printf("%d",max);
            break;
        }
        max++;
    }
}