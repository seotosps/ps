/*
5개의 정수를 입력받은 후 첫 번째 세 번째 다섯 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.

15 20 33 10 9

57
*/

#include<stdio.h>

int main(){

	int a[5];
	int i=0;

	for(;i<5;i++)
		scanf("%d",&a[i]);

	printf("%d",a[0]+a[2]+a[4]);
	return 0;
}
