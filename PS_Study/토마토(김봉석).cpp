#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// 방향을 나타내는 값
// 상하, 좌우, 위아래상자
int dx[6]= {-1,1,0,0,0,0},dy[6]= {0,0,-1,1,0,0,},dz[6]= {0,0,0,0,1,-1};
struct P {
    // 토마토의 좌표, 익기 위해 필요한 날자 num
    int x, y, z,num;
} s;
queue<P> q;
int to[110][110][110];
queue<int> v;
int m,n,h,cnt;
void bfs() {
    while(!q.empty() ) {
        P a;
        a=q.front();
        q.pop();
        for(int dr = 0 ; dr <6; dr++) {
            // 익지 않는 토마토 위치이면 상하의 범위, 좌우의 범위, 위아래상자의 범위 벗어나지 않게
            if(to[a.z + dz[dr]][a.y+dy[dr]][a.x+dx[dr]]==0 &&
                    ((a.z + dz[dr]) >0 && (a.z + dz[dr]) <=h ) &&
                    ((a.y + dy[dr]) >0 && (a.y + dy[dr]) <=n ) &&
                    ((a.x + dx[dr]) >0 && (a.x + dx[dr]) <=m )  ) {
                // 익지 않는 토마토 위치 값을 저장한다.
                P tmp;
                tmp.x = a.x + dx[dr];
                tmp.y = a.y + dy[dr];
                tmp.z = a.z + dz[dr];
                tmp.num = a.num+1;
                q.push(tmp);
                //해당 위치의 토마토를 익은 토마토로 변경한다.
                to[a.z + dz[dr]][a.y+dy[dr]][a.x+dx[dr]] = 1;
                // 익지 않은 토마토의 개수를 -1 한다.
                cnt--;
                if(cnt==0) {
                    printf("%d",tmp.num);
                    return ;
                }
            }
        }
    }
    // 모두 익지 못하는 상황이면
    printf("-1");
}
int main() {
    scanf("%d%d%d",&m,&n,&h);
    for(int i=1; i<=h; i++) {
        for(int k=1; k<=n; k++) {
            for(int t=1; t<=m; t++) {
                int tmp;
                scanf("%d",&tmp);
                to[i][k][t]=tmp;
                if(tmp ==0) {
                    // 익지 않은 토마토의 개수
                    cnt++;
                }
                if(tmp==1) {
                    // 익은 토마토의 위치
                    s.x=t;
                    s.y=k;
                    s.z=i;
                    q.push(s);
                }
            }
        }
    }
    // 익지 않은 토마토의 개수가 0 이면 다 익었다는 이야기
    if(cnt==0) {
        printf("0");
        return 0;
    }
    // 익지 않은 토마토 위치부터 시작
    bfs();
    return 0;
}
