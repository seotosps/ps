#include<stdio.h>
int main(){
    int n, data[101],i,count=0,sum=0,day=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
        if(data[i]==1) {
            count++;
            if(count>=3)
                sum+=1000;
           else sum+=500;
            if(sum>=4000) {
                    day=i+1;
                    break;
            }
        }
        else count=0;
    }
    if(!day) printf("-1");
    else printf("%d",day);
    return 0;
}
