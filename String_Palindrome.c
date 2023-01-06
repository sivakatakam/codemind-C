#include<stdio.h>
#include<string.h>
int main()
{
    char n1[20],n2[20];
    scanf("%[^
]s",n1);
    int l=strlen(n1);
    int i,j=0;
    for(i=l-1;i>=0;i--)
    {
        n2[j++]=n1[i];
    }
    if(strcmp(n1,n2)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}