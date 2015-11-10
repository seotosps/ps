#include<stdio.h>
#include<algorithm>
using namespace std;
int n,data[51],remain;
long long f(int n, int number){
    long long cnt=1;
    if(n==1)  {
            if(number%data[0]==0) return 1;
            else return 0;
    }
    int t=number/data[n-1];
    for(int i=1;i<=t;i++){
        printf("%d %d\n",n,number);
        cnt+=f(n-1,number-(data[n-1]*i));
    }
    return cnt;
}
int main(){
    long long cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",data+i);
    sort(data,data+n);
    scanf("%d",&remain);
    cnt=f(n,remain);
    printf("%lld",cnt);
}

