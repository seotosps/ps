#include<cstdio>
#include<list>
#include<queue>
using namespace std;
list<int> lid[150];
queue<int> q;
int vflag[150],vcount=0;
int main(){
    int n, connect,i,k,m,ind,val;
    scanf("%d%d",&n,&connect);
    for(i=1;i<=connect;i++){
        scanf("%d%d",&ind,&val);
        lid[ind].push_back(val);
        lid[val].push_back(ind);
    }
    vflag[1]=1;
    list<int> ::iterator it;
    it=lid[1].begin();
    while(it!=lid[1].end()){
        q.push(*it);
        vflag[*it]=1;
        it++;
    }
    while(!q.empty()){
        ind=q.front();
        it=lid[ind].begin();
        q.pop();
        vcount++;
        while(it!=lid[ind].end()){
            if(!vflag[*it]){
                q.push(*it);
                vflag[*it]=1;
            }
            it++;
        }
    }
    printf("%d",vcount);
    return 0;
}
// 7 6 1 2 2 3 1 5 5 2 5 6 4 7
/*
7
6
4 5
6 4
7 2
3 5
3 1
1 5
*/
