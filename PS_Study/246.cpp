#include<stdio.h>
int n,m,d[15][15]={1},x,y;
main(){
	scanf("%d%d",&n,&m);
	for(y=1;y<=n;y++)
		for(x=0;x<=m;x++)
			if( n*y <= m*x)
				d[x][y]=0; // �밢�� ���� �ѵ��� ���� 0����
			else d[x][y]=1; // �밢�� �Ʒ��� ���� 1��
	for(y=1;y<=n;y++)
		for(x=0;x<=m;x++)
			if(d[x][y]){

			


					
				

