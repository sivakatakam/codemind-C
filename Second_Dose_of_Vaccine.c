#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(d<=r&&d>=l)
        {
            printf("Take second dose now
");
        }
        else if(d<l)
        {
            printf("Too Early
");
        }
        else if(d>r)
        {
            printf("Too Late
");
        }
    }
}