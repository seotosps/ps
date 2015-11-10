#include<stdio.h>
int num,sum;
int main(){
   for(int n=7;n>0;n--){
        scanf("%d",&num);
        if(num%2==1) sum+=sum+num;
   }
    if(sum==0) printf("-1");
    else printf("%d",sum);
    return 0;
}
