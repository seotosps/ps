/*
공백을 포함한 문자열을 입력받아 다음과 같이 분리하여 
번호와 함께 출력하는 프로그램을 작성하시오.

문자열의 길이는 100자 이하이다.


My name is Kimchulsoo

  

1. My
2. name
3. is
4. Kimchulsoo

  */

#include<stdio.h>
int main(){
	char s[100];
	int i,j=1;
	gets(s);
	printf("%d. ",j++);
	for(i=0;s[i]!=0;i++){
	
		
		if(s[i]==' ') printf("\n%d. ",j++);
		else printf("%c",s[i]);
	/*
		for(j=i;s[j]!=' ';j++) printf("%c",s[j]);
		i=j;
		printf("\n");
		printf("%d. ",i++);
		*/
	}

	return 0;
}
