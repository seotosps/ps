#include<stdio.h>
int main(){
	int i=33;
	for(;i<127;){
		printf("%c",i++);
		if(i%20==0)printf("\n");
	}
}