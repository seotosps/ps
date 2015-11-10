#include<stdio.h>
int p[100100];
int n, m;
struct Paint{
 int a, b, c;
};
in main(){
  scanf("%d%d",&n,&m);
  int cnt=0;
  Paint data[m];
  for(int i=1;i<=m;i++)
    scanf("%d%d%d",&data[i].a,&data[i].b,&data[i].c);
  for(int i=m;i>=1;i--){
      for(

