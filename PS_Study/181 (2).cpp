/*
원주율을 3.141592로 매크로 상수로 정의하고, 
원의 넓이를 구하는 매크로 함수를 작성하여 반지름을 
입력받아 원의 넓이를 출력하는 프로그램을 작성하시오. 
(소수 넷째자리에서 반올림)

  

원의 반지름 : 1.5

  

원의 넓이 = 7.069
*/

#include<stdio.h>

#define pi 3.141592

#define result(a) ((a)*(a)*(pi))

int main(){

	double n;
	printf("원의 반지름 : ");
	scanf("%lf",&n);

	
	printf("원의 넓이 = %.3lf",result(n));

	return 0;
}