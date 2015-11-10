// 추가변수 없이 자리 세개의 수 자리 교환/

#include<stdio.h>

int main(){
	int a=4,b=6,c=8;

	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;

	printf("%d %d %d",a,b,c);
}
