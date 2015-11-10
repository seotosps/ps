#include<stdio.h>
#define abs(a) (((a)>0)?(a):-(a))
int n,a,b,s,ans;
int main(){
  scanf("%d%d%d%d",&n,&a,&b,&s);
  for(int i=1;i<=s;i++){
      int tmp,g1,g2;
      scanf("%d",&tmp);
      g1 = abs(a-tmp);
      g2 = abs(b-tmp);
      if(g1 < g2){
          ans += g1;
          a=tmp;
      }
      else {
          ans+=g2;
          b=tmp;
      }
  }
  printf("%d",ans);
  return 0;
}

/*
10
1 10
3
6
10
7

6
*/
