/*
5 5
#S###
....#
.##.#
.....
G####
출력
5

5 5
#S###
#...#
#.#.#
#....
###G#
출력
6

5 5
S#...
...#.
#.#..
####.
#G...

6 6
S.....
#.##..
###...
....#.
.####.
..G#..

*/

#include<iostream>
#include<queue>
using namespace std;
const int INF = 0x7fffffff;
typedef pair<int, int> P;
const int MAX_N=4000,MAX_M=4000;
char ma[MAX_N][MAX_M+1];
int N,M;
int sx,sy,gx,gy;

int d[MAX_N][MAX_M];

int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};

int bfs(){
	queue<P> que;

	que.push(P(sx,sy));
	d[sx][sy]=0;

	while(que.size()){
		P p=que.front ();
		que.pop();
		for(int i=0;i<4;i++){
			int nx=p.first +dx[i], ny = p.second +dy[i];
			if(nx == gx && ny==gy) return d[p.first ][p.second ]+1;
			if(nx>=0 && nx <N && ny >=0 && ny < M && ma[nx][ny] !='#' && d[nx][ny]==INF){
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first ][p.second ]+1;
			}
		}
	}
	return d[gx][gy];
}
int main(){
	cin>>N>>M;
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++){
			cin>>ma[i][j];
			d[i][j]=INF;
			if(ma[i][j]=='S') { sx=i;sy=j;}
			if(ma[i][j]=='G') { gx=i;gy=j;}
		}
	cout<<bfs();
	return 0;
}