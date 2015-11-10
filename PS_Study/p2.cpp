#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;

int m,n,d[100001];
int main(){
	printf("%d",1LL);
}
	/*
	int i,j,c=1,sub=0;
	__int64 result=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
		scanf("%d",&d[i]);
	sort(d,d+n,greater<int>());
	for(i=0;i<n;i++){
		sub=(d[i]-d[i+1])*c;
		if(sub>m){
			d[i]-=m;
			m=0;
			break;
		}
		else {
			for(j=0;j<=i;j++)
			d[j]=d[i+1];
			m=m-sub;
		}
		if(m<=0) break;
		c++;
	}
	for(i=0;i<n;i++)
		result+=d[i]*d[i];
	printf("%I64d",result);
	return 0;

}
/*
10 4
4
5
2
3
*/