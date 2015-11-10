/*
Prob No.191 : ������û (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 168    Accepted : 68
Background

N���� ���ǰ� �ִ�. 

i��° ���Ǵ� Si�� �����Ͽ� Ei�� ������. 

�� ���Ǹ� ��� �ִ� �� �ٸ� ���Ǹ� ���� �� ������, ���ǰ� ������ ����� �Ŀ� �ٸ� ���Ǹ� ���� �� �ִ�. 

�� ���ǰ� ���� �ð��� ������ ����� �ϴ� ���ǰ� ���۵Ǵ� �ð��� ���ٸ� ���� ���Ǵ� ���� �� ����. 

N���� ���� ���۽ð��� ����ð��� �־��� ��, �ִ�� ���� �� �ִ� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� ������ �� N�� �Էµȴ�. 
���� �ٺ��� N�ٿ� ���ļ� ������ ���۽����� ��������� �������� ���еǾ� �Էµȴ�. 

* 3 <= N <= 20 
* ���۽���, ��������� 10,000������ �ڿ��� (��������� ���۽������� �ݵ�� ũ��.)
Output

������ �� �ִ� �ִ� ���� ���� ����Ѵ�.
IO Example

�Է� 
5 
1 3 
2 5 
8 10 
4 7 
6 9 

��� 
3 

* ���� : 1~3���� ���Ǹ� �ϳ� ���, 4~7���� �ϳ��� ���Ǹ� ��� ���������� 8~10������ ���Ǹ� ������ 3���� ���� �� �ִ�. 
*/


#include<iostream>
#include<algorithm>
using namespace std;
struct S{
	int st, ed;
};

int cmp(S a, S b){
	return a.ed < b.ed;
}
S d[20];
int n;
int main(){
	cin>>n;
	int i,count=1,temp;
	for(i=0;i<n;i++){
		cin>>d[i].st;
		cin>>d[i].ed;
	}
	sort(d,d+n,cmp);
	temp=d[0].ed;
	for(i=1;i<n;){
		if(temp<d[i].ed && d[i].st > temp){
			count++;
			temp=d[i].ed;
		}
		i++;
	}
	cout<<count;
	return 0;
}
