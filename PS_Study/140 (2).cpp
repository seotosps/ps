/*
���� 20 ���� �Է¹޾Ƽ� �� �հ� ����� ����ϵ� 0 �� �ԷµǸ� 20�� �Է��� ������ �ʴ��� 
�� ������ �Էµ� �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ����� �Ҽ��κ��� ������ ������ 
����Ѵ�.
  
5 9 6 8 4 3 0

35 5

  */
#include<stdio.h>

int main(){

	int n,i=0,count=0,result=0;

	for(i=0;i<20;i++,count++){
		scanf("%d",&n);
		if(n==0) break;
		result = result + n;	
	}

	printf("%d %d",result,result/count);

	return 0;
}

	
