/*
6개의 문자배열을 만들고 {'H', 'A', 'N', 'C', 'O', 'M'} 
으로 초기화 한 후 문자 한 개를 입력받아 배열에서의 위치를
출력하는 작업을 반복하다가, 배열에 없는 문자가 입력되면 
종료한다는 메시지를 출력하고 끝내는 프로그램을 작성하시오. 

[입출력 예]

M
5
H
0
B
프로그램을 종료합니다.
*/

#include<stdio.h>

int main(){
	char a[7]="HANCOM";
	char in;
	int i=0;

	do{
		scanf(" %c",&in);
		for(i=0;i<6;i++){
			if(in == a[i]){
				printf("%d\n",i);
				break;
			}
		}
		if(i==6){
			printf("프로그램을 종료합니다.");
			return 0;	
		}
		
	}
	while(1);	
}
