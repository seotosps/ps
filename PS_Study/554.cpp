/*
Prob No.554 : 삼각형 (Large) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 222    Accepted : 47
Background

N개의 막대가 주어진다. 

경곽이는 이 막대들 중 임의로 3개를 골라보았다. 

고른 3개의 막대를 이용해서 삼각형을 만들어 보니 정확하게 삼각형을 만들 수 있었다. 

경곽이는 궁금해졌다. 

N개 중 3개를 골라 만들 수 있는 삼각형 중에 가장 둘레의 길이가 긴 삼각형의 크기는 얼마일까? 

만약 주어진 정수가 

5 10 3 2 4라고 하면 

3 4 5를 골라서 만든 둘레의 길이가 12인 삼각형이 가장 큰 삼각형이다. 

여러분은 경곽이를 도와 최대 길이 삼각형의 둘레의 길이를 구해주는 프로그램을 작성해야 한다.
Input

첫 번째 줄에 막대의 수 N이 입력으로 주어진다. 
다음 줄에 N개의 자연수가 공백으로 구분되어 입력된다. 

* 각 정수의 크기 1 ~ 32768 
* 3 <= N <= 100,000
Output

가장 긴 삼각형의 둘레의 길이를 출력한다. 
만약 삼각형을 만들 수 없다면 0을 출력한다
IO Example

입력 
5 
5 10 3 2 4 

출력 
12 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int f(int a,int b){
	return a>b;
}
int n, d[100001],i;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&d[i]);
	sort(d,d+n,f);
	for(i=0;i<n-2;i++)
		if(d[i]<d[i+1]+d[i+2]){
			printf("%d",d[i]+d[i+1]+d[i+2]);
			return 0;
		}
	printf("0");
}
	