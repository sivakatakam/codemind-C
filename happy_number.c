#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+pow(r,2);
        if(n==0&&s<10)
        {
            if(s==1||s==7)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
        }
        else if(n==0&&s>=10)
        {
            n=s;
            r=0;
            s=0;
        }
    }
}