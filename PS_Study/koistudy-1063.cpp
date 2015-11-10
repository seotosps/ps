#include<stdio.h>
long long int d[99]={1,1};
int n;
int main(){
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		d[i]=d[i-1]+d[i-2];
	printf("%lld",d[n]);
	return 0;
}