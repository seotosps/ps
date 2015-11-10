/*
Prob No.200 : Bad hair day [CH03.3.USACO(Silver)]

Time Limit(Test case) : 1500(ms)
Total Submit : 4943    Accepted : 3251
Background

농부 존의 N( 1 <= N <= 80,000 )마리의 소들이 오늘따라 유난히 머리스타일이 맘에 들지 않았다. 
농부 존은 소들의 머리스타일을 확인시키기 위해 소들을 일렬로 세워놓았다. 그리고 각 소들이 다른 소들의 머리스타일을 얼마나 많이 확인 할 수 있는지 궁금해졌다. 
i번째 소의 키를 hi( 1 <= hi <= 1,000,000,000 )라고 할 때 소들은 자신보다 오른쪽에 있는 소들을 바라본다. (왼쪽은 확인할 수 없다.) 그리고 소들은 자신보다 키가 같거나 큰 소의 머리스타일은 확인할 수 없다. 각 소들이 머리스타일을 확인할 수 있는 수의 총 합을 구하는 프로그램을 작성하시오. 

다음은 한 예를 나타낸다. 소의 수가 6이고 키가 { 10, 3, 7, 4, 12, 2 }이라고 할 경우

1번소는 2, 3, 4소의 머리스타일을 확인할 수 있고, 
2번소는 다른 소들의 머리스타일을 확인할 수 없다. 
3번소는 4번소의 머리스타일을 확인할 수 있으며, 
4번소도 2번 소와 마찬가지로 다른 소의 머리스타일을 확인할 수 없다. 
5번소는 6번소의 머리스타일을 확인할 수 있고, 6번소는 마지막이므로 다른 소의 머리스타일을 확인할 수 없다. 
따라서, 머리스타일을 확인할 수 있는 총 수는 3 + 0 + 1 + 0 + 1 + 0 = 5이다.
Input

입력은 키보드로 부터 들어온다. 
첫 번째 줄에는 소의 수를 나타내는 N이 주어지며 
두 번째 줄부터 N+1번째 줄까지 각 소들의 키가 주어진다.
Output

각 소들이 확인할 수의 총 합을 출력한다
IO Example

입력 
6 
10 
3 
7 
4 
12 
2 

출력 
5 

출처 : USACO 
출제 : Brian Dean 
번역 : Jeong Jong Kwang 

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



