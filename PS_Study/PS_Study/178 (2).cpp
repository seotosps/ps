/*
20������ ���� n�� �Է¹޾� 2n�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  
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