#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int i,d,c=0;
    scanf("%s",n);
    d=strlen(n);
    for(i=0;i<d;i++)
    {
        if(n[i]=='1')
        c++;
    }
    printf("%d",c);
}