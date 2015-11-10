/*
Prob No.2 : Stack [Iamcoder#12-2]

Time Limit(Test case) : 1000(ms)
Background

���� (stack)�� �⺻���� �ڷᱸ�� �� �ϳ���, ��ǻ�� ���α׷��� �ۼ��� �� ���� �̿�Ǵ� �����̴�. ������ �ڷḦ �ִ� (push) �Ա��� �ڷḦ �̴� (pop) �Ա��� ���� ���� ���� �� �ڷᰡ ���� ���߿� ������ (FILO, first in last out) Ư���� ������ �ִ�. 

1���� n������ ���� ���ÿ� �־��ٰ� �̾� �þ�������ν�, �ϳ��� ������ ���� �� �ִ�. 
�� ��, ���ÿ� push�ϴ� ������ �ݵ�� ���������� ��Ű���� �Ѵٰ� ����. 
������ ������ �־����� �� ������ �̿��� �� ������ ���� �� �ִ��� ������,
�ִٸ� � ������ push�� pop ������ �����ؾ� �ϴ����� �˾Ƴ� �� �ִ�.
�̸� ����ϴ� ���α׷��� �ۼ��϶�.
Input

ù �ٿ� n(1��n��100,000)�� �־�����. ��° �ٺ��� n���� �ٿ��� ������ 
�̷�� 1�̻� n������ ������ �ϳ��� ������� �־�����. ���� ���� ������ 
�� �� ������ ���� ����.
Output

�Էµ� ������ ����� ���� �ʿ��� ������ �� �ٿ� �� ���� ����Ѵ�. 
push������ +��, pop ������ -�� ǥ���ϵ��� �Ѵ�. �Ұ����� ��� "NO"�� ����Ѵ�.
IO Example

�Է� 
8 
4 3 6 8 7 5 2 1 

��� 
+ 
+ 
+ 
+ 
- 
- 
+ 
+ 
- 
+ 
+ 
- 
- 
- 
- 
- 

* ���� : 1���� n������ ���� ���� ���ʷ� [push, push, push, push, pop, pop, push, push, pop, push, push, pop, pop, pop, pop, pop] ������ �����ϸ� ���� [4, 3, 6, 8, 7, 5, 2, 1]�� ���� �� �ִ�. 
*/
#include<cstdio>
#include<stack>
#include<queue>
using namespace std;
#define M 10000
queue<char> q;
stack<int> s;
int n,t,i,j,last,d[M];
int main(){
	for(scanf("%d",&n);i<n;i++){
		scanf("%d",d+i);
	}
	for(i=0;i<n;i++){
		t=d[i];
		if(s.empty()){
			last=t;
			for(j=1;j<=t;j++){
				s.push(j);				
				q.push('+');
			}
		}
		if(s.top()>t) break;
		if(s.top()<t){
			for(j=last+1;j<=t;j++){
				s.push(j);
				q.push('+');
			}
			last=t;
		}
		if(s.top()==t){			
			s.pop();
			q.push('-');
		}
		
	}
	if(s.empty()) {
		for(;!q.empty();){
			printf("%c\n",q.front());
			q.pop();
		}
	}
	else printf("NO");
	return 0;
}
	



	