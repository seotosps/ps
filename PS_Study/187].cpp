/*
문자열(100자 이하)을 입력받은 후 정수를 입력받아 
해당위치의 문자를 제거하고 출력하는 작업을 반복하다가 
문자 1개가 남으면 종료하는 프로그램을 작성하시오. 
(첫 번째 문자의 위치는 1이며, 만약 입력받은 번호가 
문자열의 길이 이상이면 마지막 문자를 제거한다.)


word
3
wod
1
od
10
o

  */

#include<stdio.h>
#include<string.h>
int main(){
	char s[100];

	int len, n, i;

	scanf("%s",s);
	len=strlen(s);
	for(;len>1;){
		scanf("%d",&n);
		if(n<len) {
			for(i=n;i<len;i++)
				s[i-1]=s[i];
		}
		len--;
		for(i=0;i<len;i++)
			printf("%c",s[i]);
		printf("\n");
	}
	


	return 0;
}


