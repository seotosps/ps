/*
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
	cout<<(n+m)/2<<endl<<(n-m)/2;
	return 0;
}