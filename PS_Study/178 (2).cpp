/*
20이하의 정수 n을 입력받아 2n의 값을 출력하는 프로그램을 작성하시오.

  
10

  

1024

*/
#include<stdio.h>

int f(int n){
	if(n==0) return 1;
	else{
		return f(n-1)*2;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}