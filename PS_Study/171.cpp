/*
1���� ���޹��� �������� ���� ����ϴ� 
�Լ��� �ۼ��ϰ� 1000 ������ �ڿ����� �Է¹޾� 
�ۼ��� �Լ��� �����Ͽ� ����ϴ� ���α׷��� 
�ۼ��Ͻÿ�. 

  

100

  

5050

  */

#include<stdio.h>
void f(int n){
	int i=0,sum=0;
	for(i=1;i<=n;i++)
		sum+=i;
	printf("%d",sum);
}

int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}

