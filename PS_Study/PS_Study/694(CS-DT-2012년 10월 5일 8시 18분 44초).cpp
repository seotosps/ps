/*
Prob No.694 : 타일채우기II(Small) [CH02.2.Algorithm(Design)]
Time Limit(Test case) : 2000(ms)
Total Submit : 58    Accepted : 12
Background
자연수 n이 입력될 때, 2*n모양의 타일을 1*2, 1*1타일으로 채우는 경우의 수를 1,000,000으로 나눈 나머지를 구하여라.
Input
첫 줄에 n이 입력된다.
(1<=n<=10,000,000)
Output
경우의 수를 1,000,000으로 나눈 나머지를 출력한다.
IO Example
입력1
1

출력1
2

입력2
5

출력2
228

입력3
100000

출력3
759185 
*/

#include<iostream>
#define R 1000000
using namespace std;

int d[10000000]={0,2,7};

int main(){
	int n,i;
	cin>>n;
	for(i=3;i<=n;i++)
		d[i]=(3*d[i-2]%R+2*d[i-1]%R)%R;
	cout<<d[n];
	return 0;
}