/* 1. ������ ����ϱ� �ݺ��� �� ����

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
