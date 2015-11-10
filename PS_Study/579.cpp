/*
Prob No.579 : 토너먼트II [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 208    Accepted : 50
Background

n개의 팀이 토너먼트 대회를 치르려고 한다. 

한 경기는 최대 k개의 팀이 동시에 경기를 치르며, k팀 중 한 팀만 올라간다 (k-1팀은 떨어진다.) 

우승자가 1명 결정될 때까지 필요한 최소 경기 수를 출력하는 프로그램을 작성하시오
Input

첫 번째 줄에 참가팀의 수 n과 한 번에 경기를 할 수 있는 팀의 수 k가 공백으로 구분되어 입력된다. (단, n은 100,000이하의 자연수, k는 20이하의 자연수)
Output

필요한 최소 경기 수를 출력한다.
IO Example

입력 
8 2 

출력 
7 
*/
#include<iostream>
int main(){
	int n,k,c=0;
	for(std::cin>>n>>k;n>1;n=(n-k)+1,c++);
	std::cout<<c;
}