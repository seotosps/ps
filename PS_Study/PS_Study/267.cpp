/*
Prob No.267 : Prime Palindromes (�Ҽ��� ȸ����) [CH03.1.USACO(Train#1)]
Time Limit(Test case) : 1000(ms)
Total Submit : 64    Accepted : 14
The Champion of this Problem (C++) : gs12106


Background
���� 151�� ȸ���� �Ҽ��̴�. �� ���� �Ҽ��̸鼭 ȸ�����̴�. 
(������ ������ �ڷ� ������ ���� ���� ȸ������� �Ѵ�.)

�־��� ���� ���� a~b(5 <= a < b <= 100,000,000)���� ȸ���� �̸鼭 �Ҽ���
������ ��� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

Input
�� ���� a�� b�� �Էµȴ�.
Output
���� ȸ�����̸鼭 �Ҽ��� ������ ������������ �� �ٿ� �ϳ��� ����Ѵ�.
IO Example
�Է�
5 500

���
5
7
11
101
131
151
181
191
313
353
373
383
*/
#include<iostream>
using namespace std;
int isPrime(int n){
	int i,f=0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) f=1;
	}
	if(f) return 0;
	return 1;
}
int isPal(int n){
	int k=0;
	while(n){
		k=k*10+n%10;
		n=n/10;
	}
	return k;
}
int digit(int n){

}
int main()
{
	int i,a,b;
	cin>>a>>b;
	int st,et;
	for(i=a;i<=b;i++)
		if(i%2!=0 && i==isPal(i))
			if(isPrime(i)) cout<<i<<endl;
	return 0;
}