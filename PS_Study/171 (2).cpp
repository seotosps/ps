/*
1부터 전달받은 수까지의 합을 출력하는 
함수를 작성하고 1000 이하의 자연수를 입력받아 
작성한 함수로 전달하여 출력하는 프로그램을 
작성하시오. 

  

100

  

5050

  */

#include<stdio.h>
void f(int n){
	int i=0,sum=0;
	for(i=1;i<=n;i++)
		sum+=i;
	printf("%d",sum);
}

int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}

