#include<stdio.h>
unsigned long long findnum(unsigned long long a, unsigned long long b)
{
    unsigned long long temp=0;
    while(b>0)
    {
        temp =b;
        b=a%b;
        a=temp;
    }

    return a;
}
int main()
{
    unsigned long long a=2,b=3,n;
    scanf("%llu",&n);
    unsigned long long result =0;
    for(; b<=n; b++)
    {
        result = b*(a/findnum(a,b));
        a = result;
    }
    printf("%llu",a);
    return 0;
}
