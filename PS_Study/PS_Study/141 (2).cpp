/*
1���� 100������ ���� �� �� ���� �Է¹޾� 100 ���� ���� ������� ���ʷ� ����ϴٰ� 
10 �� ����� ��µǸ� ���α׷��� �����ϵ��� ���α׷��� �ۼ��Ͻÿ�.

7

7 14 21 28 35 42 49 56 63 70
*/

#include<stdio.h>

int main(){
	
	int n,i=0;
	scanf("%d",&n);

	for(i=1;n*i<=100;i++){
		printf("%d ",n*i);
		if((n*i)%10==0) break;
	}
	return 0;
}
	