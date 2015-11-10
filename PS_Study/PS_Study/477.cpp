/*
Prob No.477 : 가무 연습 II [CH02.3.Algorithm(perf11.2)]

Time Limit(Test case) : 2000(ms)
Total Submit : 220    Accepted : 72
Background

평소 몸치로 소문난 KoKonuT에게는 절친한 친구 AVi_malloc이 있다. 
어느 날, AVi_malloc은 장기 자랑 때 KoKonuT에게 춤을 추는 모습을 보지 못해서 한번쯤 보고 싶어한다고 말했다. 

하지만, 장기 자랑은 3일 후인데다 KoKonuT은 그닥 머리가 좋지 않아 N개의 동작 중 M개의 동작 밖에 준비하지 못한다. 



 



그리고, AVi_malloc은 감성이 매우 풍부한 사람이라 춤의 각 동작에 대한 만족도를 소수 4째 자리까지 판별할 수 있다. 

장기 자랑 때 KoKonuT이 AVi_malloc에게 줄 수 있는 최대 만족도를 구하여라.
Input

첫째 줄에는 N, M이 주어지고, 
둘째 줄부터 i+1줄에는 그 i번째 동작의 만족도인 ki가 주어진다. 
ki는 무조건 소수 4째 자리의 수로 표현된다. 
(1<=M<=N<=2500000, 1<=M<=5000, 0<=ki<=100000)
Output

만족도의 최대 값을 소수 4째 자리까지 첫째 줄에 출력하라
IO Example

입력 
4 2 
1.1328 
2.2000 
3.3000 
4.4000 

출력 
7.7000 

출제 - 주현준(GSHS_28th) 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,i,j;
double k[12500001],s;
int cm(double a, double b){
	return a>b;
}
int main(){
	for(scanf("%d%d",&n,&m);i<n;i++)
		scanf("%lf",&k[i]);
	sort(k,k+n,cm);
	for(i=0;i<m;i++)
		s+=k[i];
	printf("%.4lf",s);
}