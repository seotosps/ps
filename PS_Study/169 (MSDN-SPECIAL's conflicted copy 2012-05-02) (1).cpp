#include<cstdio>
#include<list>

using namespace std;
list<int> d[101];
int flag[101];
void dfs(int i){
	if(!d[i]) d[i]=1;
	else return 0;
			


}
int main(){
	int vertex, edge;
	int i,tempv,tempe;
	scanf("%d%d",&vertex,&edge);
	for(i=1;i<=edge;i++){
		scanf("%d%d",&tempv,&tempe);
		d[tempv].push_back (tempe);
	}
	dfs(1);
	
}
