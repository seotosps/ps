#include<stdio.h>
struct No{
  int s, e,f;
};
int n, m;

No d[500500];
int main(){
  scanf("%d%d",&n,&m);
  for(int i=1;i<=m; i++){
      scanf("%d%d",&d[i].s,&d[i].e);
      d[i].f=0;
  }
  for(int i=1;i<=m; i++){
      for(int k=1;k<=m; k++){
          if(i!=k && !d[k].f){
