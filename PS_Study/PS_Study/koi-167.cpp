#include<stdio.h>
int da[11],n,flag[10000];
int divc(int money) {
    int mid_value,i,mnum=123456789;
    if(flag[money]) return flag[money];
    for(i=0;i<n;i++)
        if(money-da[i]==0) return 1;
    for(i=0;i<n;i++){
            if(money>=da[i]) mid_value=divc(money-da[i])+divc(da[i]);
            if(mnum > mid_value) mnum=mid_value;
    }
    return flag[money]=mnum;

}
int main(){
    int money;
    scanf("%d",&money);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&da[i]);
    printf("%d",divc(money));
    return 0;
}

