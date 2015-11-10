#include<stdio.h>
long long s,n,i=1,j,temp;
int main(){
    scanf("%lld",&s);
    do{
        temp = s-i*(i+1)/2;
        if(temp==0) {
                i++;
                break;
        }
        if(temp<0) {
            break;
        }
        i++;

    }while(1);
    printf("%d",i-1);
    return 0;
}
