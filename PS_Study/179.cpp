/*

  �� ���� �Ǽ��� �Է¹޾� �հ�� ����� ���Ͽ� 
  ����� �ݿø��� ������ ����ϰ�, ������ �Է¹��� 
  ���� ���� ���� �ݿø��� �� �հ�� ����� ���Ͽ� ����� 
  �ݿø��� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


153.74 34.59 109.5


99
100
*/

#include<stdio.h>
int f(double *ap){
	
	double sum=0;
	int i;

	for(i=0;i<3;i++)
		sum+=ap[i];
	return (int)(sum/3+0.5);


}

int s(double *ap){
	int sum=0;
	int i;

	for(i=0;i<3;i++)
		sum+=(int)(ap[i]+0.5);
	sum=(int)((sum)/3.0+0.5);
	return sum;


}

int main(){

	double a[3];
	int i;

	for(i=0;i<3;i++)
		scanf("%lf",a+i);

	printf("%d",f(a));
	printf("\n%d",s(a));

	return 0;
}

