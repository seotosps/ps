#include<cstdio>
int d[5][5],td[5][5];
int count=0,temp,indata=0,pos=1;
void g(int i,int j,int k){
	int a, b;
	// 백슬래시
	if(k==0){
		for(a=0,b=0;a<5 && b<5;a++,b++)
			if(d[a][b]!=0) return;
		count++;
	}
	// 슬래시
	if(k==3){
		for(a=0,b=4;a<5 && b>=0;a++,b--)
			if(d[a][b]!=0) return;
		count++;
	}
	// 상하
	if(k==1){
		for(a=0;a<5 ;a++)
			if(d[a][j]!=0) return ;
		count++;

	}
	// 좌우
	if(k==2){
		for(b=0;b<5 ;b++)
			if(d[i][b]!=0) return ;
		count++;
	}
}
void f(int temp){
	int i, j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(d[i][j]==temp){
				d[i][j]=0;
				if(i-j==0){
					g(i,j,0);
				}
				if(i+j==4){
					g(i,j,3);
				}
				g(i,j,1);
				g(i,j,2);
				return ;
			}
}


int main(){
	int i,j;
	//input data
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&d[i][j]);
	// check data
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&td[i][j]);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			f(td[i][j]);		
			if(count==3) {
				printf("%d",pos);
				return 0;
			}
			pos++;

		}
	return 0;
}