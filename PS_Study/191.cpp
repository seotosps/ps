/*
Prob No.191 : 수강신청 (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 168    Accepted : 68
Background

N개의 강의가 있다. 

i번째 강의는 Si에 시작하여 Ei에 끝난다. 

한 강의를 듣고 있는 중 다른 강의를 들을 수 없으며, 강의가 완전히 종료된 후에 다른 강의를 들을 수 있다. 

한 강의가 끝난 시간과 다음에 듣고자 하는 강의가 시작되는 시간이 같다면 다음 강의는 들을 수 없다. 

N개의 강의 시작시간과 종료시간이 주어질 때, 최대로 들을 수 있는 강의의 수를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 강의의 수 N이 입력된다. 
다음 줄부터 N줄에 걸쳐서 강의의 시작시점과 종료시점이 공백으로 구분되어 입력된다. 

* 3 <= N <= 20 
* 시작시점, 종료시점은 10,000이하의 자연수 (종료시점은 시작시점보다 반드시 크다.)
Output

수강할 수 있는 최대 강의 수를 출력한다.
IO Example

입력 
5 
1 3 
2 5 
8 10 
4 7 
6 9 

출력 
3 

* 설명 : 1~3까지 강의를 하나 듣고, 4~7까지 하나의 강의를 듣고 마지막으로 8~10까지의 강의를 들으면 3개를 들을 수 있다. 
*/


#include<iostream>
#include<algorithm>
using namespace std;
struct S{
	int st, ed;
};

int cmp(S a, S b){
	return a.ed < b.ed;
}
S d[20];
int n;
int main(){
	cin>>n;
	int i,count=1,temp;
	for(i=0;i<n;i++){
		cin>>d[i].st;
		cin>>d[i].ed;
	}
	sort(d,d+n,cmp);
	temp=d[0].ed;
	for(i=1;i<n;){
		if(temp<d[i].ed && d[i].st > temp){
			count++;
			temp=d[i].ed;
		}
		i++;
	}
	cout<<count;
	return 0;
}
