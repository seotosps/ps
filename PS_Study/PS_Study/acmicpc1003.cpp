#include<stdio.h>
struct dap{
    int zero;
    int one;
}data[41];
int main(){
    data[0].zero=1;
    data[0].one=0;
    data[1].zero=0;
    data[1].one=1;
    int n,i,temp;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        data[i].zero=data[i-2].zero+data[i-1].zero;
        data[i].one=data[i-2].one+data[i-1].one;
    }
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        printf("%d %d\n",data[temp].zero,data[temp].one);
    }
    return 0;
}
