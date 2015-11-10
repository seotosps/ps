#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int k;
int main(){
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		int tmp;
		scanf("%d",&tmp);
		if(tmp) s.push(tmp);
		else s.pop();
	}
	int ans=0;
	while(!s.empty()){
		ans+=s.top();
		s.pop();
	}
	printf("%d",ans);
}
