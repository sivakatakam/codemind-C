#include<stdio.h>
int main()
{
    int n,cn,r,i,f,s=0;
    scanf("%d",&n);
    cn=n;
    while(n!=0)
    {
        f=1;
        i=1;
        r=n%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        s=s+f;
        n=n/10;
    }
    if(cn==s)
    {
        printf("The number %d is a strong number",cn);
    }
    else
    {
        printf("The number %d is not a strong number",cn);
    }
}