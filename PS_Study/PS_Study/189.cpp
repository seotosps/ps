/*
Prob No.189 : 미로찾기 (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 225    Accepted : 38
Background

크기가 H*W인 미로가 있다. 

이 미로는 길과 벽으로 구성되어 있으며, 길은 ".", 벽은 "#"으로 구성되어 있다. 

그리고 시작위치 "S"와 도착위치 "G"가 존재한다. 

위에서 제시한 각 정보가 주어질 때, S위치로부터 G위치까지의 최단 거리를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 H와 W가 공백으로 구분되어 입력된다. (단, H, W는 5이상 100이하의 자연수이다.) 
두 번째 줄부터 H줄에 걸쳐서 W개로 이루어진 문자열이 입력된다. 

문자열은 길은 ".", 벽은 "#", 출발점은 "S", 도착점은 "G"로 표시된다. 그리고 S와 G의 위치는 서로 다르다.
Output

출발지로부터 도착지까지의 최단경로를 출력한다. 
단, 도달할 수 없는 미로일 경우에는 -1을 출력한다.
IO Example

5 5 
#S###
#...#
###.#
#....
###G#
출력 
6 

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

4 5
S....
###.#
###.#
#G...

*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int h,w;
char d[200][200];
int flag[200][200];
typedef struct {
	int first,second,count;
}P;
queue<P> Q;
int main(){
	cin>>h>>w;
	int i,j,sx,sy;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			cin>>d[i][j];
			if(d[i][j]=='S') {
				sx =i;
				sy =j;
			}
		}
	}
		P mov, temp;
		mov.first =sx;
		mov.second=sy;
		mov.count=1;		
		Q.push(mov);
	for(;;){
		flag[mov.first ][mov.second ]=1;
		if(mov.second-1 >=0 && !flag[mov.first ][mov.second-1 ] && (d[mov.first][mov.second-1 ]=='.' || d[mov.first][mov.second-1 ]=='G' )){
			temp.first = mov.first;
			temp.second =mov.second-1 ;
			temp.count=mov.count+1;
			if(d[mov.first][mov.second-1 ]=='G') break;
			Q.push(temp);			
		}
		if(mov.first -1>=0 && !flag[mov.first -1][mov.second ] && (d[mov.first -1][mov.second ]=='.' || d[mov.first -1][mov.second ]=='G')){
			temp.first = mov.first -1;
			temp.second =mov.second ;
			temp.count=mov.count+1;
			if(d[mov.first -1][mov.second ]=='G') break;
			Q.push(temp);
		}
		if(mov.first +1<w && !flag[mov.first +1][mov.second ] && (d[mov.first +1][mov.second ]=='.' || d[mov.first +1][mov.second ]=='G')){
			temp.first = mov.first +1;
			temp.second =mov.second ;
			temp.count=mov.count+1;
			if(d[mov.first +1][mov.second ]=='G') break;
			Q.push(temp);
		}
		if(mov.second +1<h && !flag[mov.first ][mov.second +1] && (d[mov.first ][mov.second +1]=='.' || d[mov.first ][mov.second +1]=='G')){
			temp.first = mov.first ;
			temp.second =mov.second+1 ;
			temp.count=mov.count+1;
			if(d[mov.first ][mov.second +1]=='G') break;
			Q.push(temp);
		}
		Q.pop();
		mov=Q.front ();
	}
		cout<<mov.count;
		return 0;
}