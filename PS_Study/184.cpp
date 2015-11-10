/*
Prob No.184 : 실수형 진법변환 I [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 1252    Accepted : 301
Background

지금까지 다양한 진법변환 문제를 풀어왔다. 

이번 진법변환이 진법변환의 완전 최고봉은 아니지만 거의 최고봉이다. 

입력되는 10진법의 실수를 입력받아서 2~16진법의 실수형으로 진법변환을 하는 것이다. 

예를 들어 

15.5(10)를 2진법으로 바꾸면 1111.1(2)가 된다. 

이를 해결하는 프로그램을 작성하시오. 

(진법변환 최고봉 문제도 기대하시기 바랍니다. ^^;)
Input

첫 번째 줄에 하나의 실수 R과 하나의 정수 N이 공백으로 구분되어 입력된다. 
단, 0 <= R < 100000, 2 <= N <= 16 (실수에서 소수점 이하 최대 5자리까지 입력될 수 있다.)
Output

출력은 입력받은 십진수 R을 N진법의 실수로 출력하는 것이다. 
만약 소수점 이하 자리수가 무한할 경우에는 소수점 이하 10자리까지만 출력한다. (반올림하지 않는다.) 
만약 소수점 이하 자리가 0이라면 .0까지 출력한다.
IO Example

예시1) 
입력 
15.5 2 

출력 
1111.1 

예시2) 
입력 
8.0 2 

출력 
1000.0 


1E969.EEEE761616
*/
#include<stdio.h>
char d[17]="0123456789ABCDEF";
int c;
void f(int a, int b){
	if(a==0) return;
	else{
		f(a/b,b);
		printf("%c",d[a%b]);
	}
}
void g(long double a, int b){
	double k;
	k=a*b;
	if(k==0 || c>=10){
		if(c==0) printf("0");
		return;
	}
	printf("%c",d[(int)k]);
	k=k-(int)k;	
	c++;
	g(k,b);	
}
int main(){
	long double a;
	int k,b;
	scanf("%Lf%d",&a,&b);
	k=(int)a;
	a=a-(float)k;
	if(k!=0)f(k,b);
	else printf("0");
	printf(".");
	g(a,b);
	return 0;
}
