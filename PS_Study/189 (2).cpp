/*
공백을 포함한 문자열을 입력받아 각 단어로 분리하여 
문자열 배열에 저장한 후 역순으로 출력하는 프로그램을
 작성하시오.

문자열의 길이는 100자 이하이다.

  

C++ Programing jjang!!

jjang!!
Programing
C++
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,j=1;
	gets(s);
	
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]==' ' || i==0) {
			for(j=i;;j++){
				if(s[j]==0 || s[j+1]==' ') break;
				if(s[j]!=' ' )printf("%c",s[j]);
			}
			printf("\n");
		}
		
	}

	return 0;
}