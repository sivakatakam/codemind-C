#include<stdio.h>
int main()
{
    float b,h,d,g;
    scanf("%f",&b);
    if(b<=10000)
    {
        d=(b*80)/100;
        h=(b*20)/100;
        g=b+d+h;
        printf("%0.2f",g);
    }
    else if(b<=20000)
    {
        d=(b*90)/100;
        h=(b*25)/100;
        g=b+d+h;
        printf("%0.2f",g);
    }
    else
    {
        d=(b*95)/100;
        h=(b*30)/100;
        g=b+d+h;
        printf("%0.2f",g);
    }
}