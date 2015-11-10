#include<stdio.h>
long long n;
int main() {
    while(1){
    scanf("%lld",&n);

    printf("%lld",(n/12)*((n+1)/2+n%2-3*(n/12)-3)-(11+n)/12+(6+n)/12+(n+3)/12+(1+n)/12+(10+n)/12+n%2);
    }
     return 0;
}
