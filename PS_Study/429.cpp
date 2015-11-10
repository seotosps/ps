/*
Prob No.429 : 중간 키 [CH04.1.Competition(SELF11MAY)]

Time Limit(Test case) : 1000(ms)
Total Submit : 101    Accepted : 31
Background

GSHS에는 n명의 학생이 있다. 이 n명의 학생들 중 경곽이를 찾아야 한다. 우리에게 주어진 정보는 n명의 학생들의 키에 관한 정보, 경곽이가 자신보다 키가 큰 학생의 수와 자신보다 키가 적은 학생의 수가 같다고 하는 정보 뿐이다. 

학생의 수 n과 학생 n명의 키가 주어질 때, 경곽이가 몇 번째 학생인지 구하는 프로그램을 작성하시오. 단, GSHS의 모든 학생의 수는 항상 홀수이며, GSHS의 모든 학생들의 키는 다르다고 한다.
Input

첫 번째 줄에는 하나의 정수 n이 입력된다. 
두 번째 줄에는 n명의 키가 공백으로 구분되어 입력된다. 
(단 n은 20보다 적은 정수, 각 학생의 키는 100이하의 정수)
Output

경곽이가 왼쪽에서부터 몇 번째로 서 있는지를 나타내는 정수를 출력한다.
IO Example

입력 
5 
5 8 7 9 3 

출력 
3 
입력
10
1 2 3 4 9 6 7 10 19 99
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int d[20],t[20],n,i;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",d+i);
		t[i]=d[i];
	}
	sort(t,t+n);
	for(i=0;i<=n;i++)
		if(t[n/2]==d[i]) 
			printf("%d",i+1);
}


