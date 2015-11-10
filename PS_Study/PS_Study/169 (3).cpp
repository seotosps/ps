//169 DFS

#include<cstdio>
#include<list>

using namespace std;
list<int> L[101];
int v,e,i,a,b;
int main(){

	scanf("%d%d",&v,&e);

	for (;i<e;i++){
		scanf("%d%d",&a,&b);
		L[a].push_back (b);
	}
	list<int>::iterator iter;

	for(i=1;i<=v;i++)
		for(iter=L[i].begin();iter!=L[i].end();*iter++)
			printf("%d %d\n",i,*iter);

	
	return 0;
}
	