/*
10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지 차례로 출력하는 프로그램을 작성하시오.

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

	