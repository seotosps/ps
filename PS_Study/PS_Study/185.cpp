#include<cstdio>
int a[30][30];
int c(int n, int r){
	if(n==r) return 1;
	if(r==1) return n;
	if(a[n][r]) return a[n][r];
	else return a[n][r]=c(n-1,r-1)+c(n-1,r);
}
main(){
	int n,r;
	scanf("%d%d",&n,&r);
	printf("%d",c(n,r));
}	
