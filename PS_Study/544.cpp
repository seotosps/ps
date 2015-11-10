/*
Prob No.544 : Max Sum [CH04.1.Competition(IamCoder#6)]

Time Limit(Test case) : 1000(ms)
Total Submit : 50    Accepted : 28
Background

n개의 정수로 구성된 수열 a1, a2, ... , an와 한 정수 k가 주어진다. 

이 때, 연속해서 k개의 정수를 골라 그 합을 S라고 하자. 

주어진 수열에서 구할 수 있는 가장 큰 S를 출력하는 프로그램을 작성하시오.
Input

첫 번째 줄에 두 정수 n과 k가 공백으로 구분되어 입력된다. (단, 1<=k<=n<=100,000) 
다음 줄부터 n줄에 걸쳐서 한 줄에 하나씩 정수가 주어진다. (단 각 정수는 절대값이 10000을 넘지 않는다.)
Output

얻을 수 있는 최대합을 출력한다. 

* 테스트케이스의 60%는 n은 5000, k는 1000이하이다.
IO Example

입력 
5 3 
2 
5 
-4 
10 
3 

출력 
11 

*/

#include<cstdio>
long long n,k,d[1<<17],i,m,s,c;
int main(){
	for(scanf("%lld%lld",&n,&k);i<n;i++)
		scanf("%lld",d+i);
	for(i=0;i<=n&&c<=n-k;i++){
		if(i<k) s+=d[i];
		else{
			if(m<s)m=s;
			s+=d[i]-d[c++];
		}
	}
	printf("%lld",m);
}
		

		