/*
Prob No.600 : 3의 배수 [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 120    Accepted : 42
Background

길이가 n인 이진수를 입력받아서 3의 배수이면 True, 아니면 False를 출력하는 프로그램을 작성하시오.
Input

첫 번째 줄에 이진수의 길이 n이 입력된다. 
다음 줄에 0, 1로 이루어진 길이 n인 문자열이 입력된다. 
(단, n은 100,000이하이 자연수)
Output

이 이진수가 3의 배수라면 True, 아니면 False를 출력한다.
IO Example

입력 
3 
110 

출력 
True 

입력2 
3 
111 

출력 
False 
*/
#include<cstdio>
int n,k,i;
char d[9<<20];
int main(){	
	for(scanf("%d%s",&n,d);--n>=0;){
		if(d[n]-48){
			if(n%2) k+=2;
			else k++;
		}
	}
	printf("%s",k%3?"False":"True");
	return 0;
}