#include<stdio.h>
int main()
{
    long int p;
    int r,c=0;
    scanf("%ld",&p);
    while(p!=0)
    {
        r=p%10;
        p=p/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}