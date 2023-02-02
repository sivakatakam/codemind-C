#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&b>c)
        printf("%d
",b);
        else if(b>c&&c>a)
        printf("%d
",c);
        else if(a>c&&c>b)
        printf("%d
",c);
        else if(b>a&&a>c)
        printf("%d
",a);
        else if(c>a&&a>b)
        printf("%d
",a);
        else if(c>b&&b>a)
        printf("%d
",b);
    }
}