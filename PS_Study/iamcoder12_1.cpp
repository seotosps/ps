/*
Prob No.1 : Find [Iamcoder#12-1]

Time Limit(Test case) : 1000(ms)
Background

자연수 N과 K가 주어지면, 다음과 같은 두 개의 조건을 만족하는 가장 작은 자연수 A를 찾는 프로그램을 작성하시오. 

(조건 1) A는 N보다 커야 한다. 

(조건 2) A를 십진법으로 표현했을 때, 5가 적어도 K번은 나타내야 한다.
Input

첫째 줄에 두 정수 N과 K가 빈 칸을 사이에 두고 주어진다. (1≤N≤10^15, 1≤K≤15)
Output

첫째 줄에 찾고자 하는 자연수 A를 출력한다.
IO Example

입력 
595 2 

출력 
655 

입력2 
99 1 

출력 
105 
*/
#include<cstdio>
long long f(long long k){
	long long a=5;
	for(int i =1;i<k;i++)
		a=a*10+5;
	return a;
}
long long re(long long n, long long k){
	long long a=1;
	for(int i=1;i<=k;i++)
		a*=10;
	return a;
}
int main(){
	long long n,k,findnum,remain,t,result;
	scanf("%lld%lld",&n,&k);
	findnum=f(k);
	remain=re(n,k);
	t=(n+1)%remain;
	if(t==findnum) result=n+1;
	else if(t<findnum)result = (n/remain+1)*remain+findnum;
	else result =((n+1)/remain+1)*remain+findnum;
	printf("%lld",result);
	return 0;
}



	