#include<cstdio> 
#include<algorithm>
int main(){  
	int a[3];
	scanf("%d%d%d",a+0,a+1,a+2);
	
	if(a+b<=c) printf("�ﰢ���ƴ�");
	else if(a==b && b==c) printf("���ﰨ��");
	else if(a==b || b==c || c==a) printf("�̵�ﰢ��");
	else if(a*a+b*b==c*c) printf("�����ﰢ��");
	else printf("�ﰢ��");
	return 0;
}  