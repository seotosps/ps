#include<stdio.h>
#include<string.h>
int main(){
	char s[10]="0011";

	if(strcmp(s[0],s[1])!=0) printf("0");
	else printf("1");

	
	return 0;
}