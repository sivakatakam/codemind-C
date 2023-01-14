#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1,k2=0,k3=0,k4=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            k1=pow(3,k3);
            printf("%d ",k1);
            k3++;
        }
        else
        {
            printf("%d ",k2);
            k2=pow(2,k4);
            k4++;
        }
    }
}