#include<stdio.h>
int main()
{
    int n,rev,c=0,v=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rev=n%10;
        if(rev%2==0)
        {
            c++;
        }
        else
        {
           v++; 
        }
        n=n/10;
    }
    if(c!=0&&v!=0)
    {
        printf("Mixed");;
    }
    else if(c==0&&v!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}