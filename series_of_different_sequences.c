#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=3,k2=-2,k3=0,k4=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==1)
        {
            printf("%d ",k1);
            k1=k1+2*pow(3,k3);
            k3++;
        }
        else
        {
            printf("%d ",k2);
            k2=k2+4*pow(5,k4);
            k4++;
        }
    }
}