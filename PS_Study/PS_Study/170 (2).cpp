/*
‘@’문자를 10개 출력하는 함수를 작성 한 후 함수를 세 번 
호출하여 아래와 같이 출력하는 프로그램을 작성하시오. 


첫 번째
@@@@@@@@@@
두 번째
@@@@@@@@@@
세 번째
@@@@@@@@@@

  */

#include<stdio.h>

void f(){
	int i;
		
		for(i=0;i<10;i++)
			printf("@");
		printf("\n");
	
}

int  main(){
	printf("첫 번째\n");
	f();
	printf("두 번째\n");
	f();
	printf("세 번째\n");
	f();
	return 0;
}
