
/*
6���� �����Ը� �Է¹޾� �������� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �Է°� ����� �ݿø��Ͽ� �Ҽ� ù°�ڸ������� �Ѵ�.

23.2 39.6 66.4 50.0 45.6 48.0

45.5

  */

#include<cstdio>
int main(){
	double a,result=0;
	int i=0;
	for(;i<6;i++){
		scanf("%lf",&a);
		result +=a;
	}

	printf("%.1lf",result/6);
	return 0;
}