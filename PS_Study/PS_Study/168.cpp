/*
6�� �Ľ�Į �ﰢ���� �ۼ��Ͽ� ������ ����� ù ��° ����� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

1 5 10 10 5 1
1 4 6 4 1
1 3 3 1
1 2 1
1 1
1

  */

#include<stdio.h>

int main(){
	int a[6][6]={1};

	int i,j;

	for(i=1;i<6;i++)
		for(j=0;j<=i;j++)
			if(j==0) a[i][j]=a[i-1][j];
			else a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(i=5;i>=0;i--){
		for(j=0;j<=i;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

