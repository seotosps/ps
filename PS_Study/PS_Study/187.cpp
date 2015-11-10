/*
Prob No.187 : 약수의 합 (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 52    Accepted : 33
Background

한 정수 N을 입력받아서 

N의 모든 약수의 합을 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 정수 N이 입력된다. 

단, 1 <= N <= 100,000
Output

N의 약수의 합을 출력한다.
IO Example

입력 
10 

출력 
18 
입력 
10 

출력 
18 

*설명 : 10의 약수는 1, 2, 5, 10이므로 이 수들의 합은 18이다 
*/
#include<cstdio>
long long n,i=1,s;
main(){for(scanf("%lld",&n);i*i<=n;i++)if(!(n%i)){s+=i;if(n/i!=i)s+=n/i;}printf("%lld",s);}
			