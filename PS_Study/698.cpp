/*
Prob No.698 : Maximum Sum(Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 31    Accepted : 18
Background

n개의 원소로 이루어진 집합이 있다. 이 집합에서 최대로 가능한 부분합을 구하는 것이 문제이다. 
부분합이란 n개의 원소중 i번째 원소로 부터 j번째 원소까지의 연속적인 합을 의미한다. (단, 1 < i <= j <= n ) 만약 다음과 같이 6개의 원소로 이루어진 집합이 있다고 가정하자. 

6 -7 3 -1 5 2 
이 집합에서 만들어지는 부분합 중 최대값은 3번째 원소부터 6번째 원소까지의 합인 9이다.
Input

첫 줄에 원소의 수를 의미하는 정수 n이 입력되고, 둘째 줄에 n개의 정수가 공백으로 구분되어 입력된다. 
(단, 2 <= n <= 100 , 각 원소의 크기는 -1000~1000사이의 정수이다.)
Output

주어진 집합에서 얻을 수 있는 최대부분합을 출력한다.
IO Example

입력 
6 
6 -7 3 -1 5 2 

출력 
9 
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j,d[100],max=0,temp=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>d[i];
	for(i=0;i<n;i++){
		temp=d[i];
		for(j=i+1;j<=n;j++){
			if(max<temp) max = temp;
			temp=temp+d[j];
		}
	}
	cout<<max;
	return 0;
}

