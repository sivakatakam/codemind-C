#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sr;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sr=sr+sqrt(i);
    }
    printf("%.2f",sr);
}