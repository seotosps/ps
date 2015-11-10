#include<stdio.h>
int main(){
  long long int w, h;
  scanf("%lld%lld",&w,&h);
  if(w>h) {
      long long int temp=h;
      h=w;
      w=temp;
  }
  if(h%w==0) printf("%lld",h);
  else printf("%lld",w+h-1);
  return 0;
}
