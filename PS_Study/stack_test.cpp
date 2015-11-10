#include<stdio.h>
#include<algorithm>
using namespace std;
struct POINT{
  int x, y;
};
int cmp1(POINT a, POINT b){
  if(a.x==b.x)
      return a.y<b.y;
  else
    return a.x<b.x;
}
int cmp2(POINT a, POINT b){
  if(a.x==b.x)
      return a.y>b.y;
  else
    return a.x>b.x;
}

int main(){
  POINT T[10];
  for(int i=1;i<=7;i++)
      scanf("%d %d",&T[i-1].x,&T[i-1].y);
  sort(T,T+7,cmp1);
  for(int i=1;i<=7;i++)
      printf("%d %d\n",T[i-1].x,T[i-1].y);
  printf("-------\n");
  sort(T,T+7,cmp2);
  for(int i=1;i<=7;i++)
      printf("%d %d\n",T[i-1].x,T[i-1].y);

}
/*
1 5
3 5
2 4
2 3
2 6
2 5
3 4
*/
