#include<stdio.h>
#include<iostream>
#include<queue>
#define abs(a) ((a)>0?(a):-(a))
using namespace std;
struct P{
	int x,y,v;
};

int cnt[25][25], d[25][25], r,c,dx[5]={0,1,-1,0,0},dy[5]={0,0,0,1,-1}; //µ¿¼­³²ºÏ
queue<P> q;
P s,e;
void f();
int fval(int a,int b){
	if(a==b) return 1;
	else if(b<=2){
		if(a == 3 || a==4) return 2;
		else return 3;
	}
	else {
		if(a==1 || a==2) return 2;
		else return 3;
	}
}
int main(){
	scanf("%d%d",&r,&c);
	for(int i=0;i<25;i++)
		for(int k=0;k<25;k++){
			d[i][k]=1;
			cnt[i][k]=123456789;
		}
	for(int i=1;i<=r;i++)
		for(int k=1;k<=c;k++)
			scanf("%d",&d[i][k]);
	
	scanf("%d%d%d%d%d",&s.y,&s.x,&s.v,&e.y,&e.x);
	q.push(s);
	cnt[s.y][s.x]=0;
	if(s.x==e.x && s.y == e.y) {printf("0"); return 0;}
	f();
	printf("%d", cnt[e.y][e.x]);
	return 0;
}
void f(){
	while(!q.empty()){
		P tmp = q.front();
		q.pop();
		for(int k=1;k<=4;k++){
			if(d[tmp.y+dy[k]][tmp.x+dx[k]] ==0){
				int xp,yp;
				int pvalue=0;
				pvalue = fval(k,tmp.v);
				yp=dy[k];xp=dx[k];
				while(d[tmp.y+yp][tmp.x+xp]==0){
					if(cnt[tmp.y+yp][tmp.x+xp]>cnt[tmp.y][tmp.x]+pvalue){
						cnt[tmp.y+yp][tmp.x+xp]=cnt[tmp.y][tmp.x]+pvalue;
						P find;
						find.y=tmp.y+yp;find.x=tmp.x+xp;find.v = k;
						//printf(" In -> y : %d , x : %d , %d \n",find.y, find.x,cnt[tmp.y+yp][tmp.x+xp]);
						if(tmp.y+yp==e.y && tmp.x+xp ==e.x) break;						
						q.push(find);
					}					
					yp=yp+dy[k];
					xp=xp+dx[k];
				
				}				
			}
		}
	}
}

