/*
������ ������ ���ڿ��� �Է¹޾� �� �ܾ�� �и��Ͽ� 
���ڿ� �迭�� ������ �� �������� ����ϴ� ���α׷���
 �ۼ��Ͻÿ�.

���ڿ��� ���̴� 100�� �����̴�.

  

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