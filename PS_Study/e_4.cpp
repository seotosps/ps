//1의 보수와 2의 보수 출력하기

#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("1의 보수 : %x \n",~a);
	printf("2의 보수 : %x ",~a+1);
	return 0;
}
