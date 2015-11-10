/*
Prob No.446 : 수식계산 I [CH02.1.Algorithm(Exist)]

Time Limit(Test case) : 1000(ms)
Total Submit : 287    Accepted : 71
Background

이번 GSHS과제는 수식을 계산하는 프로그램 작성이었다. 

여러분들은 이 수식계산 프로그램을 완성하는 것이 목적이다. 

공백이 없는 수식이 입력될 때 그 계산결과를 구하여 출력하는 프로그램을 작성하시오. 

단, 수식은 덧셈과 뺄셈으로만 구성된다.
Input

첫 번째 줄에 수식이 입력된다. 
수식에는 공백이 없으며, 그 길이는 최대 20자를 넘지 않는다. 
반드시 하나 이상의 연산자를 포함한다.
Output

수식의 계산 결과를 출력한다.
IO Example

입력1 
12+3 

출력1 
15 

입력2 
123-100 

출력2 
23 
*/
#include<cstdio>
#include<stack>
using namespace std;
stack<int> k;
stack<char> c;
int i, a, b,f;
int main(){
	char s[20];
	scanf("%s",s);
	for(i=0;s[i];i++){
		if(s[i]<48 && k.empty()){
			k.push(a);
			a=0;
		}
		else if(!k.empty() && s[i]<48){
			if(c.top()=='+')a=k.top()+a;
			else a=k.top()-a;
			k.pop();
			k.push(a);
			a=0;
		}
		else	a=a*10+s[i]-48;		
	}
	if(c.top()<44)b+=k.top()+a;
	else b-=k.top()-a;
	
	printf("%d",b);
	
		
}