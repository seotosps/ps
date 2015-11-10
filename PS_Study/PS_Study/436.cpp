/*
Prob No.436 : �� ������ ��� ���ϱ� [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 440    Accepted : 51
Background

�� ���� a, b�� �Է¹޾Ƽ� 

���� a�� ����� ���հ� ���� b�� ����� ������ �������� ���Ͽ� ������������ ����Ͻÿ�.
Input

ù ��° �ٿ� �� ���� a, b�� �������� ���еǾ� �Էµȴ�. 
(1 <= a, b <= 100,000,000) TLE�� ����
Output

�� ������ ����� �������� ������������ ����Ѵ�.
IO Example

�Է� 
4 6 

��� 
1 2 3 4 6 

*/
#include<cstdio>
#include<set>
using namespace std;
set<int> d;
int i=1,a,b;
int main(){
	scanf_s("%d%d",&a,&b);
	for(	d.insert(a),d.insert(b);i*i<=a || i*i<=b;i++){
		if(a%i==0){
			d.insert(i);
			if(i!=a/i)	d.insert(a/i);
		}
		if(b%i==0){
			d.insert(i);
			if(i!=b/i)	d.insert(b/i);
		}
	}

	for(set<int> ::iterator iter=d.begin();iter!=d.end();)printf("%d ",*iter++);
	return 0;
}
		


