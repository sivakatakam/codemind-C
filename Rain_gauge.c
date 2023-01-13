#include<stdio.h>
int main()
{
	int t,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		if(x<3)
		{
			printf("LIGHT
");
		}
		else if(x>=3&&x<7)
		{
			printf("MODERATE
");
		}
		else
		{
			printf("HEAVY
");
		}
		
	}
}