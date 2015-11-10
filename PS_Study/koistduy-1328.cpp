#include<stdio.h>
long long int ans[50000][100];
int d[150],n,av;
long long f(int sum, int k){
  if(ans[sum][k]) return ans[sum][k];
  if(k>=n || sum > av) return 0;
  if(av == sum) return 1;
  return ans[sum][k] = f(sum+d[k],k+1)+f(sum,k+1);
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",d+i);
    av+=d[i];
  }
  if(av%2) printf("0");
  else {
    av=av/2;
    f(0+d[0],1);
    long long int tmp=0;
    for(int i=0;i<n;i++)
      tmp+=ans[av][i];
    printf("%lld",tmp);
  }
  return 0;
}
