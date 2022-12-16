#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int max;
    if(n>m)
    max=n;
    else
    max=m;
    i=1;
    while(1)
    {
        if((max*i)%n==0 && (max*i)%m==0)
        {
            printf("%d",(max*i));
            break;
        }
        i++;
    }
}