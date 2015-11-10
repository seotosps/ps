#include<stdio.h>
int main(){
       long long d[100001]={1,1};
        int n;
        scanf("%d",&n);
        for(int i=2;i<=n;i++)
            d[i]=(d[i-1]+d[i-2])%1000007;
        printf("%lld",d[n]);
        return 0;
}
