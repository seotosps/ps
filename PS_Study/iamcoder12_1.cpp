/*
Prob No.1 : Find [Iamcoder#12-1]

Time Limit(Test case) : 1000(ms)
Background

�ڿ��� N�� K�� �־�����, ������ ���� �� ���� ������ �����ϴ� ���� ���� �ڿ��� A�� ã�� ���α׷��� �ۼ��Ͻÿ�. 

(���� 1) A�� N���� Ŀ�� �Ѵ�. 

(���� 2) A�� ���������� ǥ������ ��, 5�� ��� K���� ��Ÿ���� �Ѵ�.
Input

ù° �ٿ� �� ���� N�� K�� �� ĭ�� ���̿� �ΰ� �־�����. (1��N��10^15, 1��K��15)
Output

ù° �ٿ� ã���� �ϴ� �ڿ��� A�� ����Ѵ�.
IO Example

�Է� 
595 2 

��� 
655 

�Է�2 
99 1 

��� 
105 
*/
#include<cstdio>
long long f(long long k){
	long long a=5;
	for(int i =1;i<k;i++)
		a=a*10+5;
	return a;
}
long long re(long long n, long long k){
	long long a=1;
	for(int i=1;i<=k;i++)
		a*=10;
	return a;
}
int main(){
	long long n,k,findnum,remain,t,result;
	scanf("%lld%lld",&n,&k);
	findnum=f(k);
	remain=re(n,k);
	t=(n+1)%remain;
	if(t==findnum) result=n+1;
	else if(t<findnum)result = (n/remain+1)*remain+findnum;
	else result =((n+1)/remain+1)*remain+findnum;
	printf("%lld",result);
	return 0;
}



	