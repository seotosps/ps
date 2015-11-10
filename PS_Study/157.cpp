#include<cstdio>
int n,c=1,i;
void h(char f, char b, char t, int n){	
	if (n==0) return;
	h(f,t,b,n-1);
	printf("move disk %d %c->%c\n",n,f,t);
	h(b,f,t,n-1);
}
main(){
	for(i=1,scanf("%d",&n);i<=n;i++)c*=2;
	printf("%d\n",c-1);
	h('A','B','C',n);
}
