#include<cstdio>
void f(int n){
	if(n==1) printf("*");
	else {
		f(n-1);
		printf("**");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}