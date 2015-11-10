/*
Prob No.698 : Maximum Sum(Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 31    Accepted : 18
Background

n���� ���ҷ� �̷���� ������ �ִ�. �� ���տ��� �ִ�� ������ �κ����� ���ϴ� ���� �����̴�. 
�κ����̶� n���� ������ i��° ���ҷ� ���� j��° ���ұ����� �������� ���� �ǹ��Ѵ�. (��, 1 < i <= j <= n ) ���� ������ ���� 6���� ���ҷ� �̷���� ������ �ִٰ� ��������. 

6 -7 3 -1 5 2 
�� ���տ��� ��������� �κ��� �� �ִ밪�� 3��° ���Һ��� 6��° ���ұ����� ���� 9�̴�.
Input

ù �ٿ� ������ ���� �ǹ��ϴ� ���� n�� �Էµǰ�, ��° �ٿ� n���� ������ �������� ���еǾ� �Էµȴ�. 
(��, 2 <= n <= 100 , �� ������ ũ��� -1000~1000������ �����̴�.)
Output

�־��� ���տ��� ���� �� �ִ� �ִ�κ����� ����Ѵ�.
IO Example

�Է� 
6 
6 -7 3 -1 5 2 

��� 
9 
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j,d[100],max=0,temp=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>d[i];
	for(i=0;i<n;i++){
		temp=d[i];
		for(j=i+1;j<=n;j++){
			if(max<temp) max = temp;
			temp=temp+d[j];
		}
	}
	cout<<max;
	return 0;
}

