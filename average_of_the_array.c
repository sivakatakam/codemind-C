#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],s=0,avg;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%.2f",avg);
}