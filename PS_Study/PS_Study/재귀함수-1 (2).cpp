/*
*
**
***
****
*/

#include<stdio.h>
#include<queue>
#include<list>

using namespace std;

queue<int> q;
list<int> graph[100];

void BFS(int v, int g){
	visit[v]=1;
	printf("%d",v);
	q.push(v);
	while(!q.empty()){
		v=q.front();
		q.pop();
		list<int>::iterator iter;
		for(iter=graph[v].begin();iter!=graph[v].end(),iter++)
			if(!visit[*iter]){
				printf("%d",*iter);
				q.push(*iter);
				visit[*iter]=1;
			}
	}
}

void DFS(int v){
	visit[v]=1;
	printf("%d",v);
	list<int>::iterator iter;
	for(iter=graph[v].begin();iter!=graph[v].end();iter++)
		if(!graph[*iter])
			DFS(*iter);
}

int main(){
	
	int i=1 , j=3,result=0;

	printf("%d %d ",i,j);
	
	for( ;j<1000000;){
		result = j*(j-i);
		i=j;
		j=result;
		printf("%d ",j);
	
		
		
	}
	return 0;

		


	
	
	
}
		
