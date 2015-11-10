#include<stdio.h>

void g(int n){

	if(n==1) printf("*");
	else{
		printf("*");
		g(n-1);
	}
}
void f(int n){
	if(n==1) printf("*");
	else{
		f(n-1);
		printf("\n");
		g(n);
	}
	
}
int main(){

	int a =3;
	f(a);
	return 0;
}