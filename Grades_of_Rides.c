#include<stdio.h>
int main()
{
    int hu,sp,spe;
    scanf("%d%d%d",&hu,&sp,&spe);
    if(hu>50&&sp>60&&spe>100)
    {
        printf("10");
    }
    else if(hu>50&&sp>60&&spe<100)
    {
        printf("9");
    }
    else if(hu<50&&sp>60&&spe>100)
    {
        printf("8");
    }
    else if(hu>50&&sp<60&&spe>100)
    {
        printf("7");
    }
    else if(hu>50||sp>60||spe>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}