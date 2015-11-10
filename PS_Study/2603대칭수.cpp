#include<stdio.h>
int isp(long long n){
    long long result=0,t=n;
    while(t){
        result=result*10+t%10;
        t/=10;
    }
    if(result==n) return 1;
    else return 0;
}
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    int sn=0,en=0;
    for(int i=1;i<=n;i++)
        en=en*10+9;
    for(int i=1;i<n;i++)
        sn=sn*10+10;
    for(int i=en,j=en;i>=sn && j>=sn;){
            long long int mul=i*j;
            if(isp(mul)) {
                    printf("%lld %d %d",mul, i, j);
                    return 0;
            }
            else{
             if((cnt/10)%2==0) {
                    i--;
                    cnt++;
             }
             else{
                 j--;
                cnt++;
             }
        }
    }
    return 0;
}


