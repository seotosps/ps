/*
Prob No.694 : Ÿ��ä���II(Small) [CH02.2.Algorithm(Design)]
Time Limit(Test case) : 2000(ms)
Total Submit : 58    Accepted : 12
Background
�ڿ��� n�� �Էµ� ��, 2*n����� Ÿ���� 1*2, 1*1Ÿ������ ä��� ����� ���� 1,000,000���� ���� �������� ���Ͽ���.
Input
ù �ٿ� n�� �Էµȴ�.
(1<=n<=10,000,000)
Output
����� ���� 1,000,000���� ���� �������� ����Ѵ�.
IO Example
�Է�1
1

���1
2

�Է�2
5

���2
228

�Է�3
100000

���3
759185 
*/

#include<iostream>
#define R 1000000
using namespace std;

int d[10000000]={0,2,7};

int main(){
	int n,i;
	cin>>n;
	for(i=3;i<=n;i++)
		d[i]=(3*d[i-2]%R+2*d[i-1]%R)%R;
	cout<<d[n];
	return 0;
}