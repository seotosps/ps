#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// ������ ��Ÿ���� ��
// ����, �¿�, ���Ʒ�����
int dx[6]= {-1,1,0,0,0,0},dy[6]= {0,0,-1,1,0,0,},dz[6]= {0,0,0,0,1,-1};
struct P {
    // �丶���� ��ǥ, �ͱ� ���� �ʿ��� ���� num
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
            // ���� �ʴ� �丶�� ��ġ�̸� ������ ����, �¿��� ����, ���Ʒ������� ���� ����� �ʰ�
            if(to[a.z + dz[dr]][a.y+dy[dr]][a.x+dx[dr]]==0 &&
                    ((a.z + dz[dr]) >0 && (a.z + dz[dr]) <=h ) &&
                    ((a.y + dy[dr]) >0 && (a.y + dy[dr]) <=n ) &&
                    ((a.x + dx[dr]) >0 && (a.x + dx[dr]) <=m )  ) {
                // ���� �ʴ� �丶�� ��ġ ���� �����Ѵ�.
                P tmp;
                tmp.x = a.x + dx[dr];
                tmp.y = a.y + dy[dr];
                tmp.z = a.z + dz[dr];
                tmp.num = a.num+1;
                q.push(tmp);
                //�ش� ��ġ�� �丶�並 ���� �丶��� �����Ѵ�.
                to[a.z + dz[dr]][a.y+dy[dr]][a.x+dx[dr]] = 1;
                // ���� ���� �丶���� ������ -1 �Ѵ�.
                cnt--;
                if(cnt==0) {
                    printf("%d",tmp.num);
                    return ;
                }
            }
        }
    }
    // ��� ���� ���ϴ� ��Ȳ�̸�
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
                    // ���� ���� �丶���� ����
                    cnt++;
                }
                if(tmp==1) {
                    // ���� �丶���� ��ġ
                    s.x=t;
                    s.y=k;
                    s.z=i;
                    q.push(s);
                }
            }
        }
    }
    // ���� ���� �丶���� ������ 0 �̸� �� �;��ٴ� �̾߱�
    if(cnt==0) {
        printf("0");
        return 0;
    }
    // ���� ���� �丶�� ��ġ���� ����
    bfs();
    return 0;
}
