#include<stdio.h>
int c(int n, int r){
	if(r==1) return n;
	if(n==r) return 1;
	return c(n-1,r-1)+c(n-1,r);
}
int main(){
	int n=15,r=10;
	printf("%d",c(n,r));
	return 0;
}