/*
�� ���� �ܾ �Է¹޾Ƽ� ���̰� �� �ܾ��� ���� 
������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
