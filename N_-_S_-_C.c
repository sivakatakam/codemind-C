#include<stdio.h>
int main()
{
    int a,b,i,si,ci;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        si=i*i;
        ci=i*i*i;
        printf("%d %d %d
",i,si,ci);
    }
}