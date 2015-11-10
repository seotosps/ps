#include<stdio.h>
#include<list>
#include<queue>
using namespace std;
list<int> big[110],small[110];
int n,m,ans;
int find[110];

void solve() {
    // 큰 개수
    for(int i=1; i<=n; i++) {
        if(!big[i].empty()) {
            int flag[100]= {0},cnt=0;
            queue<int> q;
            q.push(i);
            flag[i]=1;
            while(!q.empty()) {
                int tmp = q.front();
                q.pop();
                list<int> ::iterator it;
                for(it = big[tmp].begin(); it!=big[tmp].end(); it++) {
                    if(flag[*it]==0) {
                        flag[*it]=1;
                        q.push(*it);
                        cnt++;
                    }
                }
            }
            if((n+1)/2<=cnt) ans++;
        }
    }
    //작은 개수
    for(int i=1; i<=n; i++) {
        if(!small[i].empty()) {
            int flag[100]= {0},cnt=0;
            queue<int> q;
            q.push(i);
            flag[i]=1;
            while(!q.empty()) {
                int tmp = q.front();
                q.pop();
                list<int> ::iterator it;
                for(it = small[tmp].begin(); it!=small[tmp].end(); it++) {
                    if(flag[*it]==0) {
                        flag[*it]=1;
                        q.push(*it);
                        cnt++;
                    }
                }
            }/
            if((n+1)/2<=cnt) ans++;
        }
    }
}
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1; i<=m; i++) {
        int a, b;
        scanf("%d%d",&a,&b);
        big[b].push_back(a);
        small[a].push_back(b);
    }
    solve();
    printf("%d",ans);
    return 0;
}
