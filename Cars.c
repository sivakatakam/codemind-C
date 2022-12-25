#include<stdio.h>
int main()
{
    int p,c=4,a;
    scanf("%d",&p);
    a=p/c;
    if(p%c!=0)
    {
        a++;
    }
    printf("%d",a);
}