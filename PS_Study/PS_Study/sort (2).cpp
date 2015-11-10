#include<cstdio>
#include<string.h>
int main(){
	char a[1000]="abadfsadfabdc";
	
	printf("%d",strstr(a,"bc")-a);
	return 0;
}
