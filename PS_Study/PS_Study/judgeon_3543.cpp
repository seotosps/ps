#include<stdio.h>
int d[104][104];
int dx[4]={-1,1,0,0},dy[4]={0,0,1,-1};
int n,cnt;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b, k;
		scanf("%d%d%d",&a,&b,&k);
		for(int y=b+1;y<=100 && y-b<k+1 ; y++){
			for(int x=a+1;x<=100 && x-a<k+1;x++){
				d[y][x]=1;
			}
		}
	}
	for(int y=1;y<=101;y++){
		for(int x=1;x<=101;x++){
			if(d[y][x]==1){
				for(int id=0;id<4;id++){
					if(y+dy[id]>=0 && x+dx[id]>=0 && y+dy[id]<=101 && x+dx[id]<=101 && d[y+dy[id]][x+dx[id]]==0) cnt++;
				}
			}
		}
	}
	printf("%d",cnt);
}
						
