/*
�ڿ��� n�� �Է¹޾� "��� ��"�� ���� �������� �����Ͽ� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.

10 �̸��� Ȧ���� ����Ͻÿ�.

3

1 3 5
7 9 1
3 5 7

  */

#include<stdio.h>

int main(){

	int a[5]={1,3,5,7,9};
	int n,i,j,count=0;

	scanf("%d",&n);

	for(i=0; i< n;i++){
		for(j=0;j<n;j++)
			printf("%d ",a[count++%5]);
		printf("\n");
	}

	return 0;
}


	