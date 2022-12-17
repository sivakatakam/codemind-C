#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("weird");
    }
    else if(2<=n>=5)
    {
        printf("not Weird");
    }
    else if(6<=n>=20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}