#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        if(c==n)
        {
            printf("True");
            break;
        }
        else if(c<n)
        {
            a=b;
            b=c;
        }
        else if(c>n)
        {
            printf("False");
            break;
        }
    }
}