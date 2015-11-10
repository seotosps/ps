#include<stdio.h>
#include<algorithm>
#include<list>
#include<queue>
#include<functional>

using namespace std;
list<int> a;
queue<int> q;
int main(){

	list<int> ::iterator iter;
	

	q.push(5);
	q.push(4);
	q.push(3);
	q.push(2);
	q.push(1);
	
	printf("%d ",q.front());
	printf("%d",q.back());
	printf("\n");

	a.push_front (5);
	a.push_front (1);
	a.push_back (4);
	a.push_front (7);
	a.push_front (3);
	for(iter=a.begin();iter!=a.end();iter++)
		printf("%d",(*iter));
	printf("\n");
	a.sort(greater<int>());


	for(iter=a.begin();iter!=a.end();iter++)
		printf("%d",(*iter));

	return 0;

	
	
}