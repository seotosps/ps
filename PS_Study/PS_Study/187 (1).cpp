/*
Prob No.187 : ����� �� (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 52    Accepted : 33
Background

�� ���� N�� �Է¹޾Ƽ� 

N�� ��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� ���� N�� �Էµȴ�. 

��, 1 <= N <= 100,000
Output

N�� ����� ���� ����Ѵ�.
IO Example

�Է� 
10 

��� 
18 
�Է� 
10 

��� 
18 

*���� : 10�� ����� 1, 2, 5, 10�̹Ƿ� �� ������ ���� 18�̴� 
*/
#include<cstdio>
long long n,i=1,s;
main(){for(scanf("%lld",&n);i*i<=n;i++)if(!(n%i)){s+=i;if(n/i!=i)s+=n/i;}printf("%lld",s);}
			