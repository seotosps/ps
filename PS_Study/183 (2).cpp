/*
5개 이상의 문자로 된 단어를 입력받은 후 앞에서부터 5자를 출력하는 프로그램을 작성하시오.

AbCdEFG

AbCdE

  */


#include<stdio.h>

int main(){

	char ap[100000];
	int i=0;

	scanf("%s",ap);

	
	for(i=0;i<5;i++)
		printf("%c",ap[i]);

	return 0;
}


