#include<stdio.h>
#define max(a,b) ((a)<(b)? (b):(a))

int main(){
    int map[210][210]={0};
    int n, m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int k=1;k<=m;k++)
            scanf("%d",&map[i][k]);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=m;k++){
            map[i][k]+=max(map[i-1][k], map[i][k-1]);
        }
    }
    printf("%d",map[n][m]);
    return 0;
}
