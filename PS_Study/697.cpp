/*
Prob No.696 : 멀리뛰기대회(Small) [CH02.2.Algorithm(Design)]
Time Limit(Test case) : 1000(ms)
Total Submit : 193    Accepted : 112
The Champion of this Problem (C++) : gs13068


Background
GSHS에서 n명의 학생들이 멀리뛰기 대회를 했다.

각 학생의 이름은 번호로 불리며 1번부터 n번까지의 n명의 학생들이 대회에 참가하였다.

뛰는 순서는 자신의 번호(이름) 순으로 뛴다.

sutekine선생님은 각 학생의 멀리뛰기 거리와 현재까지의 순위를 기록했다.

5명의 학생이 참가한 대회 결과는 다음과 같았다.


1번 학생  기록 2m    현재순위 1위

2번 학생  기록 1m75  현재순위 2위

3번 학생  기록 1m98  현재순위 2위

4번 학생  기록 2m15  현재순위 1위

5번 학생  기록 1m83  현재순위 4위



위 결과로 전체 순위를 내려고 했는데 갑자기 비가 내려 잉크가 번지고 말았다.

앗!!! 기록이 모두 지워졌다. 남은 것은 학생 번호와 순위 뿐이다.

즉, 5명의 학생의 현재 순위인 1 2 2 1 4라는 자료 밖에 남지 않았다.

대회를 다시 여는 것은 너무 귀찮아서 sutekine 선생님은 머리를 쓰기로 했다.

머리를 잘 써서 위 순위로 전체 1위부터 5위까지 학생들의 번호를 구하니 다음과 같았다.

4 1 3 5 2

즉 4번이 1등, 1번이 2등 3번이 3등 5번이 4등 2번이 5등이라는 의미이다.

현재 순위를 이용하여 전체순위를 구하는 프로그램을 작성하시오.
Input
첫 번째 줄에 참가자 수 n이 입력된다. (n은 2,000이하의 자연수)
두 번째 줄에 n명의 현재 순위가 공백으로 구분되어 입력된다.
Output
최종 순위 1위 부터 n위까지의 번호를 한 줄에 하나씩 출력한다.
IO Example
입력
5
1 2 2 1 4

출력
4
1
3
5
2 
*/
#include<iostream>
#include<vector>
#define MAX 20001
using namespace std;
vector<int> rk;
int cr[MAX],p,n,i;
int main()
{
	cin>>n;
	rk.push_back(0);
	for(i=1;i<=n;i++){
		cin>>cr[i];
		if(i>cr[i])
		{
			vector<int>::iterator it=rk.begin();
			rk.insert(it+cr[i],i);
		}
		else rk.push_back(i);
	}
	 
	for(i=1;i<=n;i++)
		cout<<rk[i]<<endl;
	return 0;
}