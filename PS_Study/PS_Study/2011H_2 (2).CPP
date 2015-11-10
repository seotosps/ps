/*

  43

  39 35

  7

  0 11

  */

#include<stdio.h>

int f(int n, int i){
	if(i==0) return 1;
	if(i==1 ) return n;
	else return n*f(n,i-1);
}
	
int main(){

	int n;
	int i=0,j=0;

	scanf("%d",&n);

	for(i=0;i<32;i++){
		if((n>>i & 1)==1 && i!=0){
			if(((n>>i-1) &1)==0) {
				printf("%d ",n^3*f(2,i-1));
				break;
			}
		}

	}
	if(i==32) printf("0 ");

	for(i=0;i<32;i++){
		if((n>>i & 1) == 1){
			for(j=i+1;j<32;j++)
				if((n>>j & 1) ==0){
					printf("%d ",n^3*f(2,j-1));
					return 0;
				}
		}
	}

	return 0;
}
