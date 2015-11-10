#include<stdio.h>
int day[1000010],birth[1000010];
int main(){
  int a, b, d, n;
  scanf("%d%d%d%d",&a,&b,&d,&n);
  birth[0]=1;
  int cnt =0;
  while(cnt<=n){	  
	  if(birth[cnt]){
		int tmp=cnt;
		for(int i=tmp+a;i<tmp+b && i<=n;i++){
			birth[i]+=birth[cnt];
			birth[i]%=1000;
		}
	  }
	  cnt++;
  }
  cnt=0;
  while(cnt<=n){
	int tmp=cnt;
	if(birth[tmp]){
		for(int i=tmp; i<tmp+d && i<=n;i++)
		    day[i]=(day[i]+birth[tmp])%1000;
	}
	cnt++;
  }
  printf("%d",day[n]);
  return 0;
}
