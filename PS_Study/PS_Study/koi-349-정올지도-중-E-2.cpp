#include<stdio.h>
#define abs(a) ((a)>0?(a):-(a))
#define MIN(a,b) ((a>b)?(b):(a))
int n,cnt,wall[22],ans=123456789;
 void back(int i,int a, int b,int sum){
  if(sum>ans) return ;
  if(i == cnt) {
      ans = sum;
      return ;
  }
  back(i+1,wall[i],b,sum+abs(wall[i]-a));
  back(i+1,a,wall[i],sum+abs(wall[i]-b));
}
int main(){
  int a, b;
  scanf("%d%d%d%d",&n,&a,&b,&cnt);
  for(int i=0;i<cnt;i++)
    scanf("%d",wall+i);
  back(0,a,b,0);
  printf("%d",ans);
  return 0;
}
