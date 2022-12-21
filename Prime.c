#include<stdio.h>
int main()
{
    int l,fc=0,i;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        if(l%i==0)
        {
        	fc=fc+1;
		}
        
    }
    if(fc==2)
    {
	
    printf("Prime");
}
else
{
	printf("Not Prime");
}
}