/*
���ڿ�(100�� ����)�� �Է¹��� �� ������ �Է¹޾� 
�ش���ġ�� ���ڸ� �����ϰ� ����ϴ� �۾��� �ݺ��ϴٰ� 
���� 1���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
(ù ��° ������ ��ġ�� 1�̸�, ���� �Է¹��� ��ȣ�� 
���ڿ��� ���� �̻��̸� ������ ���ڸ� �����Ѵ�.)


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


