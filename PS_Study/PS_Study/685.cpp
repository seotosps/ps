/*
Prob No.685 : ���� �ٷ�� [CH04.1.Competition(GTPC12)]

Time Limit(Test case) : 1000(ms)
Total Submit : 43    Accepted : 25
Background

�ڿ��� 35�� �������� 53�� �ǰ�, �� �ڸ����� ���ϸ� 8�� �ȴ�. ��, 1200�� �������� 21�� �ǰ�, �� �ڸ����� ���ϸ� 3�� �ȴ�. ��, �������� �� ���ʿ��� 0�� ���õȴ�. 

�ڿ��� N�� �ԷµǸ� �� ���� ������ ���� �� �ڸ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

�ڿ��� N�� �Էµȴ�. (1��N��1,000,000)
Output

1. ù° �ٿ� ������ ���� ����Ѵ�. 
2. ��° �ٿ� �� �ڸ����� ���� ����Ѵ�.
IO Example

�Է� 
22 

��� 
22 
4 

�Է�2 
703 

��� 
307 
10 
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	int rev=0, sum=0;
	cin>>n;
	for(;n;){
		rev=rev*10+n%10;
		sum=sum+n%10;
		n=n/10;
	}
	cout<<rev<<endl<<sum;
	return 0;
}
