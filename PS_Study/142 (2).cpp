/*
�ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.

3

*
**
***
**
*

  */

#include<stdio.h>

void f(int a){
	
	if (a==1)
		printf("*");
	
	else{
		printf("*");
		f(a-1);
	}
}

void c(int b){
		
	if(b==1)
		printf("*");
	else{
		c(b-1);
		printf("\n");
		f(b);
	}
}
void k(int b){
		
	if(b==1);
	else{
		f(b-1);
		printf("\n");
		k(b-1);
		
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	c(a);
	printf("\n");
	k(a);
	return 0;
}
