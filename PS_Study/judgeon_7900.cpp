#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
  int r,n,d[1100];
  scanf("%d%d",&r,&n);
  for(int i=0;i<n;i++)
    scanf("%d",d+i);
  sort(d,d+n);
  int start,cnt=0;
  start = 0;
  while(1){
    int p = upper_bound(d+start,d+n,d[start]+r)-d;
    if(d[p] > d[start]+r) p--;
    int e = upper_bound(d+p,d+n,d[p]+r)-d;
    cnt++;
    if(e==n) break;
    if(d[e] == d[p]+r) e++;
    start = e;

  }
  printf("%d",cnt);
  return 0;
}
