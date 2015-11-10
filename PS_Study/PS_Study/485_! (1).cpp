#include<cstdio>  
int n,i;  
char d[10001];  
void f(){if(i>=n)return;d[i++]=42;puts(d);f();}  
main(){scanf("%d",&n);f();}