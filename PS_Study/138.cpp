/*
Background

서로다른 2개의 주사위를 n번 던질 경우, 두 주사위의 눈의 합의 빈도수를 구하는 프로그램을 작성하시오. 
단, 랜덤 함수를 이용하여 프로그래밍 하시오. 
Input

주사위를 던지는 횟수 n이 입려된다. 단 n은 30000이하의 자연수이다.
Output

두 주사위 눈의 합 2부터 12까지의 빈도수를 공백으로 구분하여 출력하시오. 
IO Example

입력 
200 

출력 
3 13 13 20 41 31 27 22 13 13 4 
*/

#include<cstdio>
//#include<stdlib.h>
#include<time.h>
int a[13],n;
main(){
	srand(time(NULL));
	for(std::cin>>n;n>0;n--)
		a[(rand()%6+1)+(rand()%6+1)]++;
	for(n=2;n<=12;n++)
		std::cout<<a[n]<<' ';
}
