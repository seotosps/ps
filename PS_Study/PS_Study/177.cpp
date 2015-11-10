#include<cstdio>
void f(char *d,char s,char n){
	if (s>n)return ;
	else{f(d,s*2,n);f(d,s*2+1,n);printf("%c ",d[s]);}
}
main(){
	char a[21];int n;scanf("%d",&n);scanf("%s",&a[1]);f(a,1,n);
}