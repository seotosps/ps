/*
Prob No.508 : Party [CH04.1.Competition(IamCoder#3c)]

Time Limit(Test case) : 1000(ms)
Total Submit : 35    Accepted : 18
Background

정호는 파티를 열기로 했다. 정호는 자신의 친구들, 그 친구의 친구들을 초대하기로 했다. 

정호가 다니는 학교의 학생 수는 N명(2≤N≤500)이고, 각 학생들은 1~N까지의 번호가 정해져 있다. 

정호는 번호가 1번이다. 정호는 친구들끼리의 관계를 나타내는 리스트를 입수했다. 이 리스트에는 M(1≤M≤10,000)개의 친구 정보가 나타나 있다. 

이 리스트를 바탕으로 하여 이번 파티에 초대받을 총 학생수를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 학생의 수 N이 입력된다. 
두 번째 줄에는 리스트의 수 M이 입력된다. 
세 번째 줄부터 M줄에 걸쳐서 학생의 번호 ai와 bi가 공백으로 구분되어 한 줄에 하나씩 입력된다. 같은 친구관계가 1번 이상 주어지는 경우는 없다.
Output

출력은 초대받는 모든 학생의 수를 출력한다. 

* 테스트케이스의 60%는 N이 100이하, M은 500이하의 값이다.
IO Example

입력 
6 
5 
1 2 
1 3 
3 4 
2 3 
4 5 

출력 
3 

입력2 
6 
5 
2 3 
3 4 
4 5 
5 6 
2 5 

출력2 
0 
*/
#include<cstdio>
#include<queue>
#include<list>
using namespace std;
list<int> l[501];
queue<int> q;
int n,m,i,a,b,c,t;
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++){
		scanf("%d%d",a,b);
		l[a].push_back(b);
	}
	if(l[1].empty()) printf("0");
	else{
		for(;!l[1].empty();){
			t=l[1].back();
			q.push(t);
			c++;
		}
	}
	for(;!q.empty ();){
		c=c+l[q.front()].size;
		q.pop();
	}
}

