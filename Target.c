#include<stdio.h>
int main()
{
    int p1,p2,p3,p4;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    if(10>p1||10>p2||10>p3||10>p4)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}