#include<stdio.h>
int main()
{
    int units,uc=0;
    scanf("%d",&units);
    float bill,sr,tb;
    if(units<200)
    {
        bill=units*1.20;
    }
    else if(units>=200 && units<400)
    {
        bill=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        bill=units*1.80;
    }
    else
    {
        bill=units*2.00;
    }
    if(bill>=400)
    {
        sr=bill*0.15;
        tb=bill+sr;
        printf("%.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%.2f",tb);
    }
}