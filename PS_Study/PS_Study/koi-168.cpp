#include<stdio.h>
int chr, n, cnt[1000000], mon[1000000];
int main() {
    int i, j;
    scanf("%d %d", &chr, &n);
    for(i=0; i<mon[0]; i++)	{
        cnt[i]=0;
    }
    for(i=0; i<n; i++)	scanf("%d", &mon[i]);
    cnt[mon[0]]=1;

    for(i=mon[i]+1; i<=chr; i++) {
        cnt[i]=cnt[i-mon[0]]+1;
    }

    for(j=1; j<n; j++) {
        for(i=1; i<=chr; i++) {
            if(mon[j]<=i) {
                if(cnt[i]>=cnt[i-mon[j]]+1)		cnt[i]=cnt[i-mon[j]]+1;
            }
        }
    }
    printf("%d", cnt[chr]);
}
