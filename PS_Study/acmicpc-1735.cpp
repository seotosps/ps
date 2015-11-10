#include<stdio.h>
int f(int a, int b){
    int temp;
    while(b){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b,c,d,i,j,k;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    i=(a*d+b*c);
    j=b*d;
    k=f(i,j);
    printf("%d %d",i/k,j/k);
    return 0;
}

