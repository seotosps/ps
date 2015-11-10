#include<stdio.h>
long long a=2,b=7,c,n;
int main(){
    scanf("%d",&n);
    int i;
    for(i=3;i<=n;i++){
        c=2*b+5*a;
        a=b;
        b=c;
    }
    if(n==1) printf("2");
    else if(n==2) printf("7");
    else printf("%lld",c);
    return 0;
}

