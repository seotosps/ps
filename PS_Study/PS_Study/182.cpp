/*
Prob No.182 : Ʈ���� �� [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 640    Accepted : 203
Background

n�� �Է¹޾Ƽ� n���� ���� �����Ǵ� ���� �ٸ� ����� ����Ʈ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

������ 3���� ���� ������ 2�� Ʈ���� ���̴�. 


Input

�� ���� n�� �Էµȴ�. (�� n�� 20�̸��� ���̴�.)
Output

n���� ���� �� �ִ� ���� �ٸ� 2�� Ʈ���� ���� ����Ѵ�.
IO Example

�Է� 
3 

��� 
5 
*/
#include<cstdio>
int d[21]={1,1},n,c,j,i,sum;
int main(){
	scanf("%d",&n);
	for(c=2;c<=n;c++){
		for(i=0,j=c-1;i<c&&j>=0;i++,j--)
			sum+=d[i]*d[j];
		d[c]=sum;
		sum=0;
	}
	printf("%d",d[n]);
}