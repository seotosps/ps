#include<stdio.h>
#include<stdlib.h>
int main(){

	int i;
	char a[]="ATGC";
	freopen("out.txt","w",stdout);
	for(i=0;i<100;i++){
		printf("%c",a[rand()%4]);
	}
	return 0;
}