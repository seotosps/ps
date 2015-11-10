#include<stdio.h>
int f(int n){
    if(n==0) return n*-1;
    else return f(n-1)*-1+n;
}
int miai(){
    printf("%d",f(10));
    return 0;
}

