#include<stdio.h>
int d[20000];
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",d+i);
    for(int i=1;i<=n;i++)
        if(!d[i-1] && !d[i] && !d[i+1]) cnt++;
    printf("%d",cnt);
    return 0;
}
