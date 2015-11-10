/*
Prob No.200 : Bad hair day [CH03.3.USACO(Silver)]

Time Limit(Test case) : 1500(ms)
Total Submit : 4943    Accepted : 3251
Background

��� ���� N( 1 <= N <= 80,000 )������ �ҵ��� ���õ��� ������ �Ӹ���Ÿ���� ���� ���� �ʾҴ�. 
��� ���� �ҵ��� �Ӹ���Ÿ���� Ȯ�ν�Ű�� ���� �ҵ��� �Ϸķ� �������Ҵ�. �׸��� �� �ҵ��� �ٸ� �ҵ��� �Ӹ���Ÿ���� �󸶳� ���� Ȯ�� �� �� �ִ��� �ñ�������. 
i��° ���� Ű�� hi( 1 <= hi <= 1,000,000,000 )��� �� �� �ҵ��� �ڽź��� �����ʿ� �ִ� �ҵ��� �ٶ󺻴�. (������ Ȯ���� �� ����.) �׸��� �ҵ��� �ڽź��� Ű�� ���ų� ū ���� �Ӹ���Ÿ���� Ȯ���� �� ����. �� �ҵ��� �Ӹ���Ÿ���� Ȯ���� �� �ִ� ���� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

������ �� ���� ��Ÿ����. ���� ���� 6�̰� Ű�� { 10, 3, 7, 4, 12, 2 }�̶�� �� ���

1���Ҵ� 2, 3, 4���� �Ӹ���Ÿ���� Ȯ���� �� �ְ�, 
2���Ҵ� �ٸ� �ҵ��� �Ӹ���Ÿ���� Ȯ���� �� ����. 
3���Ҵ� 4������ �Ӹ���Ÿ���� Ȯ���� �� ������, 
4���ҵ� 2�� �ҿ� ���������� �ٸ� ���� �Ӹ���Ÿ���� Ȯ���� �� ����. 
5���Ҵ� 6������ �Ӹ���Ÿ���� Ȯ���� �� �ְ�, 6���Ҵ� �������̹Ƿ� �ٸ� ���� �Ӹ���Ÿ���� Ȯ���� �� ����. 
����, �Ӹ���Ÿ���� Ȯ���� �� �ִ� �� ���� 3 + 0 + 1 + 0 + 1 + 0 = 5�̴�.
Input

�Է��� Ű����� ���� ���´�. 
ù ��° �ٿ��� ���� ���� ��Ÿ���� N�� �־����� 
�� ��° �ٺ��� N+1��° �ٱ��� �� �ҵ��� Ű�� �־�����.
Output

�� �ҵ��� Ȯ���� ���� �� ���� ����Ѵ�
IO Example

�Է� 
6 
10 
3 
7 
4 
12 
2 

��� 
5 

��ó : USACO 
���� : Brian Dean 
���� : Jeong Jong Kwang 

*/

#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
stack<int> st;
long long c;
int main(){
	int n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(st.empty()) st.push(t);
		else{
			for(;!st.empty();){
				if(st.top()>t) break;
				st.pop();
			}
			st.push(t);
		}
		c+=st.size()-1;
	}
	printf("%lld",c);
}


