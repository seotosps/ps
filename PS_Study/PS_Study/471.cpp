/*
Prob No.471 : 운동장 넓이 구하기 [CH02.3.Algorithm(perf11.2)]

Time Limit(Test case) : 1000(ms)
Total Submit : 421    Accepted : 56
Background

학교 운동장의 가로, 세로의 길이를 입력받아서 그 넓이를 구하는 프로그램을 작성하는 과제를 부여받았다. 그런데 아주 정밀하게 측정하고 싶어서 mm단위로 입력받는다. 따라서 매우 큰 값을 처리해야 한다. 


 



입력값은 w, h는 1 <= w, h <= 10^18의 값이다. 그리고 넓이를 구한 결과는 10^18으로 나눈 나머지를 출력한다. 

단, 폭 w, 높이 h로 넓이 s를 구하는 식은 s = w * h로 한다. 

유의사항 - 높은 순위를 얻기 위해서는 큰 수 처리(배열을 활용한 처리)를 안하고 답을 구할 수 있는 자신만의 방법을 강구하세요~ (Python, Java 등은 수행평가로 인정하지 않습니다.)
Input

두 정수가 공백으로 구분되어 입력된다.
Output

두 정수로 구한 넓이를 10^18으로 나눈 나머지를 출력한다.
IO Example

입력 
100 100 

출력 
10000 

출제 - 정종광 1/2 (Informatics Teacher) 
*/
#include<cstdio>
#define MAX 1000000000
#define R 1000000000000000000
unsigned long long w,h,s,i;
int main(){
	scanf("%llu%llu",&w,&h);
	s=w/MAX;
	i=h/MAX;
	w=w%MAX;
	h=h%MAX;
	printf("%llu",((MAX*s*i*w*h)%R+(w*h)%R)%R);
	return 0;
}
	