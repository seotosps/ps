
/*
10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.

  



10 20 25 66 83 7 22 90 1 100

  



홀수 번째 합 : 141
짝수 번째 합 : 283
*/

#include<stdio.h>

int main(){
	int a,od=0,ev=0;
	int n=10;
	for(;n>0;n--){
		scanf("%d",&a);
		if(n%2==0) ev=ev+a;
		else od=od+a;
	}
	printf("홀수 번째 합 : %d\n짝수 번째 합 : %d",ev,od);
	return 0;
}

