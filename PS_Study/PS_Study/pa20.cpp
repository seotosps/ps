#include<stdio.h>
#define max3(a,b,c) ((a)<(b)?((b)<(c)?(c):(b)):((a)<(c)?(c):(a)))
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max3(a,b,c));
    return 0;
}

