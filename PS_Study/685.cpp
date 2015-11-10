/*
Prob No.685 : 숫자 다루기 [CH04.1.Competition(GTPC12)]

Time Limit(Test case) : 1000(ms)
Total Submit : 43    Accepted : 25
Background

자연수 35를 뒤집으면 53이 되고, 각 자리수를 합하면 8이 된다. 또, 1200을 뒤집으면 21이 되고, 각 자릿수를 합하면 3이 된다. 즉, 뒤집었을 때 불필요한 0은 무시된다. 

자연수 N이 입력되면 그 수를 뒤집은 수와 각 자릿수의 합을 출력하는 프로그램을 작성하시오.
Input

자연수 N이 입력된다. (1≤N≤1,000,000)
Output

1. 첫째 줄에 뒤집은 수를 출력한다. 
2. 둘째 줄에 각 자릿수의 합을 출력한다.
IO Example

입력 
22 

출력 
22 
4 

입력2 
703 

출력 
307 
10 
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	int rev=0, sum=0;
	cin>>n;
	for(;n;){
		rev=rev*10+n%10;
		sum=sum+n%10;
		n=n/10;
	}
	cout<<rev<<endl<<sum;
	return 0;
}
