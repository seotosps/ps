/*

  세 개의 실수를 입력받아 합계와 평균을 구하여 
  평균을 반올림한 정수를 출력하고, 다음은 입력받은 
  수를 각각 먼저 반올림한 후 합계와 평균을 구하여 평균을 
  반올림한 한 결과를 출력하는 프로그램을 작성하시오.


153.74 34.59 109.5


99
100
*/

#include<stdio.h>
int f(double *ap){
	
	double sum=0;
	int i;

	for(i=0;i<3;i++)
		sum+=ap[i];
	return (int)(sum/3+0.5);


}

int s(double *ap){
	int sum=0;
	int i;

	for(i=0;i<3;i++)
		sum+=(int)(ap[i]+0.5);
	sum=(int)((sum)/3.0+0.5);
	return sum;


}

int main(){

	double a[3];
	int i;

	for(i=0;i<3;i++)
		scanf("%lf",a+i);

	printf("%d",f(a));
	printf("\n%d",s(a));

	return 0;
}

