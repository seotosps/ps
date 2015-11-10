#include<stdio.h>
int main(){
  int n,cnt=2;
  scanf("%d",&n);
  for(int i=2;i*i<=n;i++){
      if(n%i==0){
          if(n/i == i ) cnt++;
          else cnt+=2;
      }
  }
  printf("%d",cnt);
  return 0;
}

