#include<stdio.h>
#include<queue>
#define MAX 1000001
using namespace std;

int visit[MAX];

int f,i,n, k;

queue<int> q;
void ser(int start, int end){
	if(start<end){
		while(!q.empty ()){
			f=q.front ();
			q.pop();
			if(f-1>=0 && visit[f-1]==-1){
				visit[f-1]=visit[f]+1;
				q.push(f-1);
				if(f-1==end) break;
			}
			if(f+1<MAX && visit[f+1]==-1){
				visit[f+1]=visit[f]+1;
				q.push(f+1);
				if(f+1==end) break;
			}
			if(f*2<MAX && visit[f*2]==-1){
				visit[f*2]=visit[f]+1;
				q.push(f*2);
				if(f*2==end) break;
			}
		}
		printf("%d",visit[end]);
	}
	else printf("%d",start-end);
}

int main(){


	scanf("%d%d",&n,&k);
	for(i=0;i<MAX;i++)
		visit[i]=-1;
	q.push(n);
	visit[n]=0;
	ser(n,k);
	return 0;
}


