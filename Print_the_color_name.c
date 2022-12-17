#include<stdio.h>
int main()
{
    char n,V,I,B,G,Y,O,R;
    scanf("%c",&n);
    if(n=='V')
    {
        printf("Violet");
    }
    else if(n=='I')
    {
        printf("Indigo");
    }
    else if(n=='B')
    {
        printf("Blue");
    }
    else if(n=='G')
    {
        printf("Green");
    }
    else if(n=='Y')
    {
        printf("Yellow");
    }
    else if(n=='O')
    {
        printf("Orange");
    }
    else if(n=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}