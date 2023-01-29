#include<stdio.h>
int main()
{
    char a[20];
    scanf("%[^
]s",a);
    int i,c=0,d=0;
    for(i=0;i<19;i++)
    {
        if(a[i]=='z')
        c++;
        else if(a[i]=='o')
        d++;
    }
    if(2*c==d)
    printf("Yes");
    else
    printf("No");
}