#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int n,d[120],ans[120][3];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",d+i);
	for(int i=1;i<=n;i++){
		ans[i][0]=MAX(ans[i-1][0],ans[i-1][1]);
		ans[i][0]=MAX(ans[i][0],ans[i-1][2]);
		ans[i][1]=ans[i-1][0]+d[i];
		ans[i][2]=ans[i-1][1]+d[i];
	}
	int tmp=0;
	for(int i=0;i<3;i++)
		tmp=MAX(tmp,ans[n][i]);
	printf("%d",tmp);
	return 0;
}
