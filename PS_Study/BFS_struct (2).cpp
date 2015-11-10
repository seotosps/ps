#include<stdio.h>
#include<queue>
using namespace std;

#define MAX_VERTICES 100

typedef struct node{
	int vertex;
	struct node * link;
};

typedef struct node * node_pointer;

node_pointer garph[MAX_VERTICES];

int visit[MAX_VERITCES]={0};

queue<int> q;



void BFS(int v){

	node_pointer w;
	w->vertex =v;
	printf("%d",v);
	q.push(v);
	visit[v]==1
	while(!q.empty()){
		


	




}

