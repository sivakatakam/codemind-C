#include<stdio.h>
int main()
{
    int p,c,b,m,ct,t,pr;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&ct);
    t=p+c+b+m+ct;
    pr=(t*100)/500;
    if(pr>=90)
    {
        printf("Grade A");
    }
  else  if(pr>=80)
    {
        printf("Grade B");
    }
    else if(pr>=70)
    {
        printf("Grade C");
    }
    else if(pr>=60)
    {
        printf("Grade D");
    }
    else if(pr>=40)
    {
        printf("Grade E");
    }
    
    else 
    {
        printf("Grade F");
    }
    
}