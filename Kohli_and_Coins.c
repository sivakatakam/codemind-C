#include<stdio.h>
int main()
{
    int x,pr;
    scanf("%d",&x);
    if(x%10==0)
    {
        pr=x/10;
        printf("%d",pr);
    }
    else if(x%10==5)
        {
            pr=x/10;
        printf("%d",pr+1);  
        }
    else if(x%5==0)
    {
        pr=x/5;
        printf("%d",pr);
    }
    
    else
    {
        printf("-1");
    }
}