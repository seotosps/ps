#include<cstdio>
int d[5],t,i;
int f(int n){
	int i,c=1;
	i=n;
	while(i/10){c=c*10;}
	if(n*n%c==n) return 1;
	else return 0;
}
int main(){
	for(i=5;i>0;i--){
		scanf("%d",&t);
		if(f(t)) d[i]=1;
	}
	for(i=1;i<6;i++)
		if(d[i]==1) printf("YES\n");
		else printf("NO\n");
	return 0;
}