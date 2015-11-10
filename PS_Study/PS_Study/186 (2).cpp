/*
두 개의 단어를 입력받아서 길이가 긴 단어의 문자 
개수를 출력하는 프로그램을 작성하시오.

excel powerpoint

10
*/

#include<stdio.h>
#include<string.h>
int main(){
	char s1[1000];
	char s2[1000];

	scanf("%s %s",s1,s2);

	if(strlen(s1)>strlen(s2))
		printf("%d",strlen(s1));
	else
		printf("%d",strlen(s2));

	return 0;
}
