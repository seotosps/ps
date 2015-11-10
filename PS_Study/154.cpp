
/*
6명의 몸무게를 입력받아 몸무게의 평균을 출력하는 프로그램을 작성하시오. 입력과 출력은 반올림하여 소수 첫째자리까지로 한다.

23.2 39.6 66.4 50.0 45.6 48.0

45.5

  */

#include<cstdio>
int main(){
	double a,result=0;
	int i=0;
	for(;i<6;i++){
		scanf("%lf",&a);
		result +=a;
	}

	printf("%.1lf",result/6);
	return 0;
}