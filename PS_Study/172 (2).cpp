/*
�ڿ����� �Է¹޾� �Ʒ��� ���� �簢���� ����ϴ�
���α׷��� �ۼ��Ͻÿ�. (����ϴ� �κ��� �Լ��� �ۼ��Ͻÿ�.) 


  
3

  


1 2 3
2 4 6
3 6 9
*/

#include<stdio.h>

void f(int n){
	int i,j;

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",i*j);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
