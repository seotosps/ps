/*
  사대와 동물을 전부 비교하여 잡을 수 있는 개수를 세는 방법

*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define abs(x) ((x)>0?(x):-(x))
using namespace std;
int poscnt,anicnt,l,ans;
int pos[100010];
pair<int ,int> ani[100010];
void solve(){
  //동물의 위치에서 가까운 사대를 찾는다.
  for(int k=0;k<anicnt;k++){
    // lower_bound 이용
    int idx=lower_bound(pos,pos+poscnt,ani[k].first)-pos;
    if( l>=abs(ani[k].first-pos[idx])+ani[k].second)
        ans++;
  }
}
int main(){
  scanf("%d%d%d",&poscnt,&anicnt,&l);
  for(int i=0;i<poscnt;i++)
    scanf("%d",pos+i);
  for(int i=0;i<anicnt;i++)
      scanf("%d%d",&ani[i].first,&ani[i].second);
  sort(pos,pos+poscnt);
  solve();
  printf("%d",ans);
  return 0;
}

