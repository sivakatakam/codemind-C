#include<stdio.h>
int main()
{
	int n,p,r,rev,t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
		scanf("%d",&n);
		rev=0;
		p=n;
		while(n!=0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		if(p==rev)
		{
			printf("True
");
		}
		else
		{
			printf("False
");
		}
	}
}