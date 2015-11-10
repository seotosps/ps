/*
Prob No.169 : 깊이우선탐색 I [CH02.1.Algorithm(Exsit)]

Time Limit(Test case) : 1000(ms)
Total Submit : 297    Accepted : 90
Background

깊이우선탐색(DFS)는 그래프의 임의의 한 정점에서 출발하여, 연결된 정점들 중 하나에 대해서 깊이 순으로 먼저 탐색해 나가는 탐색법이다. 예를 들어 다음과 같은 그래프를 보자. 

 

이 그리프에서 1번 정점에서 출발한 깊이우선탐색 결과는 다음과 같다. 

1-2-3-4-6-5-7 

(단, 한 점정에서 갈 수 있는 곳이 여러 곳일 먼저 입력된 정점 부터 먼저 방문한다. FIFO 즉, 2 4, 2 3 순으로 입력되었다면 2번 정점에서 4번을 먼저 방문하고 나중에 3번을 방문하도록 작성해야 한다.) 
문제에 주어지는 모든 그래프는 양방향 무가중치 그래프이다.
Input

첫 번째 줄에 정점의 수와 간선의 수가 공백으로 구분되어 입력된다. (단 정점은 100개 이하, 간선은 200개 이하임) 
둘 째 줄부터 간선의 수에 해당되는 줄 만큼 한 줄에 한 간선의 출발점과 도착점이 공백으로 구분되어 입력된다.
Output

DFS순회 결과를 공백으로 구분하여 출력한다. (출발점은 1)
IO Example

입력 
7 8 
1 2 
1 4 
1 5 
2 3 
3 4 
3 7 
4 6 
5 6 

출력 
1 2 3 4 6 5 7 

DATA제작 및 정답제작 : 이승현(27th) 

*/
#include<iostream>
#include<list>
using namespace std;
list<int> d[2001];
int f[2001],n,e,i,x,y;
void dfs(int i){if(f[i])return;f[i]=1;cout<<i<<' ';list<int>::iterator it;for(it=d[i].begin();it!=d[i].end();it++)if(*it) dfs(*it);}
int main(){for(cin>>n>>e,i=1;i<=e;i++){cin>>x>>y;d[x].push_back(y);d[y].push_back(x);}dfs(1);}
