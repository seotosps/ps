#include<stdio.h>
int n,m,d[15][15]={1},x,y;
main(){
	scanf("%d%d",&n,&m);
	for(y=1;y<=n;y++)
		for(x=0;x<=m;x++)
			if( n*y <= m*x)
				d[x][y]=0; // 대각선 위에 넘들은 전부 0으로
			else d[x][y]=1; // 대각선 아래에 전부 1로
	for(y=1;y<=n;y++)
		for(x=0;x<=m;x++)
			if(d[x][y]){

			


					
				

