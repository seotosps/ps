/*
Prob No.196 : 그래프생성II (Special Judge) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 28    Accepted : 12
Background

그래프생성I의 문제와 같이 n개의 도시를 도로로 연결하고자 한다. 

하지만 이미 k개의 도로는 만들어져 있다. (이 k개의 도로에 사이클은 없다.) 

나머지 도로를 직접 구성하여 n개의 도시를 모두 연결하고자 한다. 

단, 도로의 수를 최소화 해야한다. 

즉 n개의 도시를 모두 연결하는데 필요한 최소의 도로의 수는 n-1개이다.
Input

첫 번째 줄에 도시의 수 n이 입력으로 주어진다. (단, n은 100이하의 자연수) 
두 번째 줄에 이미 만들어진 도로의 수 k가 주어진다. (k는 1이상 n-2이하의 자연수) 
세 번째 줄부터 k줄에 걸쳐서 이미 만들어진 도로가 연결한 도시의 정보가 공백으로 구분되어 주어진다.
Output

출력은 첫 번째 줄에 새로 건설해야하는 도로의 수를 출력한다. 
다음 줄 부터 각 도로의 정보를 한 줄에 하나씩 공백으로 구분하여 출력한다.
IO Example

입력 
3 
1 
1 2 

출력 
1 
1 3 

4
2
1 2
3 4
*/
#include<cstdio>
int n,a[101],k,i=1,x,y;
main(){for(scanf("%d%d",&n,&k);i<=k;i++){scanf("%d%d",&x,&y);a[y]=1;}for(printf("%d\n",n-k-1),i=2;i<=n;i++)if(!a[i])printf("1 %d\n",i);}
			


