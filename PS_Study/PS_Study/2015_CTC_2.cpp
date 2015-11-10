#include<stdio.h>
long long int ch(long long int k, long long int t){
  long long int tmp=0, digit=1;
  while(t){
      tmp+=((t%10)*digit);
      digit=digit*k;
      t=t/10;
  }
  return tmp;
}
long long int re(long long int m, long long int value){
  long long int tmp=1, digit=1;
  while(value){
      tmp=tmp*10+value%m;
      value=value/m;
  }
  return  tmp;
}
int main(){
  long long int k, t, m,tmp=0;
  scanf("%lld %lld %lld",&k,&t,&m);
  tmp=ch(k,t);
  tmp= re(m,tmp);
  while(tmp>1){
      printf("%lld",tmp%10);
      tmp=tmp/10;
  }
  return 0;
}
