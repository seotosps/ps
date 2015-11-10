/*
Prob No.680 : 합과 차 [CH04.1.Competition(GTPC11)]

Time Limit(Test case) : 1000(ms)
Total Submit : 84    Accepted : 49
Background

어떤 두 자연수 a와 b가 있을 때(a≥b), 합 n=a+b와 차 m=a-b는 다음과 같은 성질을 가진다. 

n+m은 짝수이다. 

두 자연수 a와 b의 합과 차가 입력되었을 때, a와 b를 구하는 프로그램을 작성하시오.
Input

1. 첫 번째 줄에 자연수 n이 주어진다. (2≤n≤1,000,000) 
2. 두 번째 줄에 정수 m이 주어진다. (0≤m≤999,998) 
3. n+m은 짝수이다.
Output

1. a+b=n과 a-b=m이 되는 두 수 a와 b를 구하여 첫 번째 줄에 a를 출력한다. 
2. 두 번째 줄에 b를 출력한다.
IO Example

입력1 
5 
1 

출력1 
3 
2 

입력2 
1998 
0 

출력2 
999 
999 

*/
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	cout<<(n+m)/2<<(n-m)/2;
	return 0;
}