#include<stdio.h>
long long f[45]={1,1}, r=1;
int main(){
    int n, m,i, p=1,t=0;
    scanf("%d %d",&n,&m);
    for(i=2;i<=n;i++) f[i]=f[i-1]+f[i-2];
    for(i=1;i<=m;i++){
        scanf("%d",&t);
        p =t-p;
        r*=f[p];
        p =t+1;
    }
    if(t !=n){
        p = n - t;
        r*=f[p];
    }
    printf("%lld",r);
    return 0;
}



