#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d%d",&n,&t);
    for(i=1;i<=t;i++)
    {
        if(i%2==1)
        {
            printf("%d x %d = %d",n,i,n*i);
            printf("
");
        }
    }
}