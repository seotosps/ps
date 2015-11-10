
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
    long long ma=0;
    int n,cnt=0,f,s;
    scanf("%d",&n);
    int sn=0,en=0;
    for(int i=1;i<=n;i++)
        en=en*10+9;
    for(int i=1;i<n;i++)
        sn=sn*10+10;
    for(int i=en,j=en;i>=sn && j>=sn;){
            long long int mul=i*j;
            if(isp(mul)) {
                    if(ma<mul) {
                            ma=mul;
                            f=i;
                            s=j;
                    }
            }
            else{
             if((cnt/sn)%2==0) {
                    i--;
                    cnt++;
             }
             else{
                 j--;
                cnt++;
             }
        }
    }
    printf("%d",
    return 0;
}


