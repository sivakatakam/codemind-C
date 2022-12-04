#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,A;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)*0.5;
    A=sqrt(double(s*(s-a)*(s-b)*(s-c)));
    printf("%0.2f",A);
}