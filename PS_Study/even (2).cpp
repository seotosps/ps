/*
�� ���� A, B (1 <= A <= B <= 2,000,000,000) �� �־����� A �� B ���� (A, B ����) �� ��� ������ ¦���� �� ������ ����Ͻÿ�.

�Է�

�� ���� A, B �� �־�����.
���

��� ������ ¦���� ���� ������ ����Ͻÿ�.
����� ��

�Է�

3 17

��� 

12
*/

#include<stdio.h>
int main(){
	int a, b,j,count=0,sum=0;
	scanf("%d%d",&a,&b);
	if(a>b) {
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(;a<=b;a++){
		for(j=0;j<32;j++)
			if(a>>j & 1 ==1) count++;
		if(count!=0 && count%2==0) 
			sum++;
		count=0;
			
	}
	printf("%d",sum);
	return 0;
}
	