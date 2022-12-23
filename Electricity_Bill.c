#include<stdio.h>
int main()
{
    int u;
    float cr,b,sr,t;
    scanf("%d",&u);
    if(u<=199)
    {
        cr=1.20;
        b=u*cr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,cr,b);
    }
    else if(u>=200&&u<400)
    {
        cr=1.40;
        b=u*cr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,cr,b);
    }
    else if(u>=400&&u<600)
    {
        cr=1.60;
        b=u*cr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,cr,b);
    }
    else if(u>=600&&u<800)
    {
        cr=1.80;
        b=u*cr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,cr,b);
    }
    else
    {
        cr=2.00;
        b=u*cr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
",u,cr,b); 
    }
    if(b>400)
    {
        sr=(b*15)/100;
        t=sr+b;
        printf("Surcharge: %.2f
Total Amount: %.2f",sr,t);
    }
    else
    {
        sr=0;
        t=sr+b;
        printf("Surcharge: %.2f
Total Amount: %.2f",sr,t);
    }
}