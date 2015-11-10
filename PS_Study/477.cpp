/*
Prob No.477 : ���� ���� II [CH02.3.Algorithm(perf11.2)]

Time Limit(Test case) : 2000(ms)
Total Submit : 220    Accepted : 72
Background

��� ��ġ�� �ҹ��� KoKonuT���Դ� ��ģ�� ģ�� AVi_malloc�� �ִ�. 
��� ��, AVi_malloc�� ��� �ڶ� �� KoKonuT���� ���� �ߴ� ����� ���� ���ؼ� �ѹ��� ���� �;��Ѵٰ� ���ߴ�. 

������, ��� �ڶ��� 3�� ���ε��� KoKonuT�� �״� �Ӹ��� ���� �ʾ� N���� ���� �� M���� ���� �ۿ� �غ����� ���Ѵ�. 



 



�׸���, AVi_malloc�� ������ �ſ� ǳ���� ����̶� ���� �� ���ۿ� ���� �������� �Ҽ� 4° �ڸ����� �Ǻ��� �� �ִ�. 

��� �ڶ� �� KoKonuT�� AVi_malloc���� �� �� �ִ� �ִ� �������� ���Ͽ���.
Input

ù° �ٿ��� N, M�� �־�����, 
��° �ٺ��� i+1�ٿ��� �� i��° ������ �������� ki�� �־�����. 
ki�� ������ �Ҽ� 4° �ڸ��� ���� ǥ���ȴ�. 
(1<=M<=N<=2500000, 1<=M<=5000, 0<=ki<=100000)
Output

�������� �ִ� ���� �Ҽ� 4° �ڸ����� ù° �ٿ� ����϶�
IO Example

�Է� 
4 2 
1.1328 
2.2000 
3.3000 
4.4000 

��� 
7.7000 

���� - ������(GSHS_28th) 
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