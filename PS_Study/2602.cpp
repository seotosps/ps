#include<stdio.h>
int main(){
    int n,i,ma=0;
    scanf("%d",&n);
    while(n%2==0) n=n/2;
    if(n==1) ma=2;
    for(i=3;i<=n;i+=2){
        if(n%i==0){
	    while(n%i==0) n=n/i;
	    if(i>ma)ma =i;
        }
    }
    printf("%d",ma);
    return 0;
}
