/*
영문자 두 개를 입력 받아서 각각의 아스키코드의 합과 차를 출력하는 프로그램을 작성하시오.

 
A a

  

162 32

  */


#include<stdio.h>
#include<math.h>
int main(){
	char a, b;

	scanf("%c %c",&a,&b);

	printf("%d %d",b+a,abs(a-b));

	return 0;
}

