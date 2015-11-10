#include<stdio.h>

int d[100],n,p;

int main(){
  int tmp;
  scanf("%d%d",&n,&p);
  d[n]=1;
  tmp=n;
  do{
      tmp=(tmp*n)%p;
      if(d[tmp]==2) break;
      else d[tmp]++;
  }while(1);
  int cnt=0;
  for(int i=0;i<100;i++)
    if(d[i]==2) cnt++;
  printf("%d",cnt);
  return 0;
}
