/*
Prob No.267 : Prime Palindromes (소수인 회문수) [CH03.1.USACO(Train#1)]
Time Limit(Test case) : 1000(ms)
Total Submit : 64    Accepted : 14
The Champion of this Problem (C++) : gs12106


Background
정수 151은 회문인 소수이다. 이 수는 소수이면서 회문수이다. 
(앞으로 읽으나 뒤로 읽으나 같은 수를 회문수라고 한다.)

주어진 정수 범위 a~b(5 <= a < b <= 100,000,000)에서 회문수 이면서 소수인
수들을 모두 구하여 출력하는 프로그램을 작성하시오.

Input
두 정수 a와 b가 입력된다.
Output
구한 회문수이면서 소수인 수들을 오름차순으로 한 줄에 하나씩 출력한다.
IO Example
입력
5 500

출력
5
7
11
101
131
151
181
191
313
353
373
383
*/
#include<iostream>
using namespace std;
int isPrime(int n){
	int i,f=0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) f=1;
	}
	if(f) return 0;
	return 1;
}
int isPal(int n){
	int k=0;
	while(n){
		k=k*10+n%10;
		n=n/10;
	}
	return k;
}
int digit(int n){

}
int main()
{
	int i,a,b;
	cin>>a>>b;
	int st,et;
	for(i=a;i<=b;i++)
		if(i%2!=0 && i==isPal(i))
			if(isPrime(i)) cout<<i<<endl;
	return 0;
}