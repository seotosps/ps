#include<stdio.h>
int main(){
    long long d[40]={0,2};
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        d[i]=3*d[i-1]+2;
    printf("%lld",d[n]);
    return 0;
}
