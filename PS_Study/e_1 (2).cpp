/* 1. 구구단 출력하기 반복문 한 개로

 */

#include<stdio.h>
int main(){
	int i=1,j=1;
	for(i=1;i<10;){
		printf("%d * %d = %d\n" ,i,j,i*j);
		j++;
		if(j>9){
			i++;
			j=1;			
		}
	}
	return 0;
}
