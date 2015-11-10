#include<stdio.h>
#include<string.h>
int row,col;
int d[110][110];
int tmp[110][110];
int oncnt,offcnt;
int dx[4]={-1,1,0,0}, dy[4]={0,0,-1,1};
void dfs(int i,int j, int v){
	if(tmp[i][j]==v){
		tmp[i][j]=1-v;
		for(int a=0;a<4;a++){
			if(i+dx[a]>=0 && j+dy[a] >=0 && i+dx[a]<row &&  j+dy[a]<col && tmp[i+dx[a]][j+dy[a]] == v)
				dfs(i+dx[a],j+dy[a],v);
		}
	}
}
	int main(){
	scanf("%d%d",&row,&col);
	memset(d,-1,sizeof(d));
	for(int i=0;i<row;i++)
		for(int k=0;k<col;k++)
			scanf("%d",&d[i][k]);
	memset(tmp,-1,sizeof(tmp));
	for(int i=0;i<row;i++)
		for(int k=0;k<col;k++)
			tmp[i][k]=d[i][k];
	for(int i=0;i<row;i++)
		for(int k=0;k<col;k++)
			if(tmp[i][k]==0){
				oncnt++;
				dfs(i,k,0);
			}


	memset(tmp,-1,sizeof(tmp));
	for(int i=0;i<row;i++)
		for(int k=0;k<col;k++)
			tmp[i][k]=d[i][k];
	for(int i=0;i<row;i++)
		for(int k=0;k<col;k++)
			if(tmp[i][k]==1){
				offcnt++;
				dfs(i,k,1);
			}

	printf("%d %d",oncnt,offcnt);
	return 0;
}
	