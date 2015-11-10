/*
Prob No.195 : 그래프생성I (Special Judge) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 39    Accepted : 23
Background

n개의 도시가 있다. 

이 도시가 모두 연결될 수 있도록 도로망을 구성하고자 한다. 

도로의 수는 몇 개가 되든 관계 없다. 

모든 도시들이 여러분이 구성한 도로들을 이용해 연결되면 된다. 

도시의 수를 입력받아서 도로를 구성하는 프로그램을 작성하시오.
Input

첫 번째 줄에 도시의 수 n이 주어진다. (단, 도시의 수는 100을 넘지 않는다.) 
단, 도시는 1번부터 n번 도시로 간주한다.
Output

첫 번째 줄에 도로의 수 m을 출력한다. 
두 번째 줄부터 m줄에 걸쳐서 도로를 연결한 두 도시의 번호를 공백으로 구분하여 출력한다.
IO Example

입력 
3 

출력 
3 
1 2 
2 3 
3 1 

*/
#include<cstdio>
int n,i,j;
int main(){for(scanf("%d",&n),i=1;i<n;i++)for(j=i+1;j<=n;)printf("%d %d\n",i,j++);}