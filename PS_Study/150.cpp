/*
10���� ���ڸ� �Է¹޾� ���������� �Է¹��� ���ں��� ù ��° �Է¹��� ���ڱ��� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

A E C X Y Z c b z e

e z b c Z Y X C E A

  */

#include<stdio.h>
#include<string.h>
int main(){

	char a[100];
	int n;

	gets(a);


	n = strlen(a);
	n--;
	for(;n>=0;n--)
		if(a[n]!=' ') printf("%c ",a[n]);
	return 0;
}

	