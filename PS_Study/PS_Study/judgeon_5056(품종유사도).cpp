#include<stdio.h>
int d[1000100],n,k,ans=-1;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(d[tmp]==0) d[tmp]=i;
		else{
			if(i-d[tmp] <=k && ans < tmp)
				ans =tmp;
		}
	}
	printf("%d",ans);
	
	return 0;
}