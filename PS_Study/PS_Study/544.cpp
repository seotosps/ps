/*
Prob No.544 : Max Sum [CH04.1.Competition(IamCoder#6)]

Time Limit(Test case) : 1000(ms)
Total Submit : 50    Accepted : 28
Background

n���� ������ ������ ���� a1, a2, ... , an�� �� ���� k�� �־�����. 

�� ��, �����ؼ� k���� ������ ��� �� ���� S��� ����. 

�־��� �������� ���� �� �ִ� ���� ū S�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� �� ���� n�� k�� �������� ���еǾ� �Էµȴ�. (��, 1<=k<=n<=100,000) 
���� �ٺ��� n�ٿ� ���ļ� �� �ٿ� �ϳ��� ������ �־�����. (�� �� ������ ���밪�� 10000�� ���� �ʴ´�.)
Output

���� �� �ִ� �ִ����� ����Ѵ�. 

* �׽�Ʈ���̽��� 60%�� n�� 5000, k�� 1000�����̴�.
IO Example

�Է� 
5 3 
2 
5 
-4 
10 
3 

��� 
11 

*/

#include<cstdio>
long long n,k,d[1<<17],i,m,s,c;
int main(){
	for(scanf("%lld%lld",&n,&k);i<n;i++)
		scanf("%lld",d+i);
	for(i=0;i<=n&&c<=n-k;i++){
		if(i<k) s+=d[i];
		else{
			if(m<s)m=s;
			s+=d[i]-d[c++];
		}
	}
	printf("%lld",m);
}
		

		