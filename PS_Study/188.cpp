/*
������ ������ ���ڿ��� �Է¹޾� ������ ���� �и��Ͽ� 
��ȣ�� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���ڿ��� ���̴� 100�� �����̴�.


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
