#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,t1,t2;
        scanf("%d%d",&x,&y);
        t1=2*x;
        t2=5*y;
        if(t1<t2)
        {
            printf("Candy
");
        }
        else if(t1>t2)
        {
            printf("Chocolate
");
        }
        else
        {
            printf("Either
");
        }
    }
}