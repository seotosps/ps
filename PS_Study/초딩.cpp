#include<stdio.h>
int data[101],cnt,n;
void f(int a,int sum, int flag){
	if(flag ==0) sum +=data[a];
	else sum -=data[a];
	if(sum >20 || sum <0) return;
	if(a==n-1){
		if(sum==data[n]) cnt++;
		return ;
	}
	f(a+1,sum,0);
	f(a+1,sum,1);
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&data[i]);
	f(1,0,0);
	printf("%d",cnt);
	return 0;
}