#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(pow(i,2)+pow(j,2)==n)
            {
                c=1;
            }
        }
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}