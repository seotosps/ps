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
int t[20]={0,1},n,i=1;
int main(){
	for(scanf("%d",&n),i=2;i<=n;i++){
		t[i]=((4*n-2)/(n+1))*t[i-1];
	}
	printf("%d",t[n-1]);		
	return 0;
}