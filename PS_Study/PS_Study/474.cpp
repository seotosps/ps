/*
Prob No.474 : ���̿� �����ü [CH02.3.Algorithm(perf11.2)]

Time Limit(Test case) : 1000(ms)
Total Submit : 216    Accepted : 54
Background

�����ü���� 4���� �������� ���� ABCD��� �Ѵ�. ���̰� B���� �����ؼ� �� �Ͽ� �� ĭ�� ������ �����δٰ� �Ѵ�. 

 

�� ���� n�� �Է¹޾Ƽ� n�� �Ŀ� A�� ���� ���� Ȯ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

�� ���� n�� �Էµȴ�. (�� n�� 40�̸��� ���̴�.)
Output

p/q���·� ����Ѵ�. (��, p,q�� ���μ�)
IO Example

�Է� 
4 

��� 
20/81 

���� - ������(GSHS_28th) 
*/
#include<cstdio>
long long d[41],a[41],n,i,k;
main(){
	for(i=1,d[0]=a[0]=1,scanf("%lld",&n);i<=n;)a[i++]=a[i-1]*3;
	for(i=1;i<n;)d[i++]=a[i]-d[i-1];
	if(n)printf("%lld/%lld",d[n-1],a[n]);
	else printf("0");
}	

