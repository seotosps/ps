/*
���α׷� ��: sec(open)
���ѽð�: 1 ��
�ʰ� �Է����� �־��� �� �̸� �� �� �� �ð� �� �� �� �� ������ �����ϴ� ���α׷��� �ۼ�.

�Է�

��(second)�� �Է����� �־�����. 10 000 000 ������ ����
���

4 ���� ������ ��µȴ�.
�� �� �� ��

����� ��

�Է�

70

���

0 0 1 10
*/
#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d ",n/(3600*24));
	n=n%(3600*24);
	printf("%d ",n/3600);
	n=n%3600;
	printf("%d ",n/60);
	n=n%60;
	printf("%d",n);
	return 0;
}
	