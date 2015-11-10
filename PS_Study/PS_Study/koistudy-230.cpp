#include<stdio.h>
int n,d[1100],ans[1100];
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",d+i);
  ans[0]=1;
  int i,k;
  int max=0;
  for(i=1;i<n;i++){
      max=1;
      for(k=0;k<i;k++)
          if(d[i]<d[k]) {
              if(max<=ans[k]) max =ans[k]+1;
          }
      ans[i]=max;
  }
  max=0;
  for(int i=0;i<n;i++)
    if(ans[i]>max) max = ans[i];
  printf("%d",max);
  return 0;
}
