/*
Prob No.189 : �̷�ã�� (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 225    Accepted : 38
Background

ũ�Ⱑ H*W�� �̷ΰ� �ִ�. 

�� �̷δ� ��� ������ �����Ǿ� ������, ���� ".", ���� "#"���� �����Ǿ� �ִ�. 

�׸��� ������ġ "S"�� ������ġ "G"�� �����Ѵ�. 

������ ������ �� ������ �־��� ��, S��ġ�κ��� G��ġ������ �ִ� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� H�� W�� �������� ���еǾ� �Էµȴ�. (��, H, W�� 5�̻� 100������ �ڿ����̴�.) 
�� ��° �ٺ��� H�ٿ� ���ļ� W���� �̷���� ���ڿ��� �Էµȴ�. 

���ڿ��� ���� ".", ���� "#", ������� "S", �������� "G"�� ǥ�õȴ�. �׸��� S�� G�� ��ġ�� ���� �ٸ���.
Output

������κ��� ������������ �ִܰ�θ� ����Ѵ�. 
��, ������ �� ���� �̷��� ��쿡�� -1�� ����Ѵ�.
IO Example

5 5 
#S###
#...#
###.#
#....
###G#
��� 
6 

5 5
#S###
....#
.##.#
.....
G####
���
5

5 5
#S###
#...#
#.#.#
#....
###G#
���
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