#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
            printf("True");
            c=1;
        }
        
    }
    if(c==0)
    {
    	printf("False");
	}
}