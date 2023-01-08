#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d
%d
",x,y);
}