/*
�ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.

3
    *
 
  ***
 
*****
 
   */


#include<stdio.h>

int main(){
	int n,i,j;


	scanf("%d",&n);
	for(j=1;j<=n;j++){	
		for(i=1;i<=2*(n-j);i++)
			printf(" ");		
		for(i=1;i<=2*j-1;i++)
			printf("*");
		printf("\n");
	}
	return 0;
}