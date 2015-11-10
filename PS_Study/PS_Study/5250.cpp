#include<cstdio>
int n,d[352][352],max;
int main(){
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int k=1;k<=i;k++){
            scanf("%d",&d[i][k]);
            if(d[i-1][k] < d[i-1][k-1]) d[i][k] +=d[i-1][k-1];
            else d[i][k] +=d[i-1][k];
            if(max < d[i][k]) max =d[i][k];
        }
    }
    printf("%d",max);
    return 0;
}
