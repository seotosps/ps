#include<stdio.h>
#include<queue>
using namespace std;

int n,d[550][550],dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
int val[550][550];
struct P{
	int x, y, value;
};
//  n크기로 들판을 반이상 돌아다닐 수 있는지 판단
int abs(int a){
	return a>0?a:-a;
}
int back(int x,int y,int dept){
	int max=0;
	for(int row=x;row<=n;row++){
		for(int col=y;col<=n;col++){
			if(val[row][col]!=-1){				
				int cnt=1;
				int tmp= val[row][col];
				val[row][col]=-1;
				for(int i=0;i<4;i++){ 
					for(int j=0;j<4;j++){
						if(val[x+dx[i]][y+dy[j]]!=-1 && abs(val[x+dx[i]][y+dy[j]] - tmp)<=dept)
							cnt=1+back(x+dx[i],y+dy[j],dept);
					}
				}
				if(max<cnt) max =cnt;
			}
		}
	}
	return max;
}
int f(int x, int y, int dept){		
	for(int row=0;row<=n+1;row++)
		for(int col=0;col<=n+1;col++)
			val[row][col]=d[row][col];
	return back(x,y,dept);							
}

int main(){
	scanf("%d",&n);	
	for(int row=0;row<=n+1;row++){
		d[row][0] =-1;
		d[row][n+1]=-1;
		d[0][row] =-1;
		d[n+1][row]=-1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",d[i]+j);
	int a,b,ans=123456789;
	a=0,b=1000000;
	while(a<=b){
		int mid = (a+b)/2;
		// 가능하면
		int v= f(1,1,mid);
		printf("%d %d\n" ,v,mid);
		if(v*2>=n*n) {
			ans=mid;
			b=mid-1;
		}
		else{
			a=mid;
		}
	}
	printf("%d",ans);
	return 0;
}