#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqn,cn,r,c=1;
    scanf("%d",&n);
    sqn=n*n;
    cn=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c=c*10;
    }
    if(sqn%c==cn)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}