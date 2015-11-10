#include<cstdio>
long long n, d[10001],i;
main(){scanf("%lld",&n);for(i=1;i<=n;i++)d[i]=d[i-1]+(i*(i+1))/2;printf("%lld",d[n]);}
