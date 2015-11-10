/*
Prob No.218 : 선거 [CH03.2.USACO(Bronze)]

Time Limit(Test case) : 1000(ms)
Total Submit : 205    Accepted : 49
Background

소들은 폭군 농부존의 독재정권을 뒤엎은 뒤 그들이 새로운 정부를 세웠고, 그들의 지도자를 뽑을 첫 선거를 앞두고 있다. 

베시는 N마리( 1<= N <= 50,000)의 소들 중 1마리를 대통령 소로 선출하려고 한다. 

베시는 어느 소가 선출될지를 알고 싶어한다. 선거는 2라운드로 진행된다. 

첫 번째 라운드에서는 득표순으로 K( 1 <= K <= N )마리의 소들이 2라운드로 진출한다. 2라운드에서는 가장 많은 득표를 한 소가 대통령 소로 선출된다. 

주어진 1라운드 득표수 Ai ( 1 <= Ai <= 1,000,000,000 )와 2라운드 득표수 Bi( 1 <= Bi <= 1,000,000,000 )를 입력받아서 최종 당선자를 결정하는 프로그램을 작성하시오.
Input

첫째 줄에는 2개의 공백으로 구분된 정수 N, K가 차례로 입력된다. 다음 줄부터 N+1번째 줄까지 1차, 2차 득표수인 Ai, Bi가 공백으로 구분되어 차례로 입력된다.
Output

최종 대통령으로 선출되는 소의 번호를 출력한다.
IO Example

입력 
5 3 
3 10 
9 2 
5 6 
8 4 
6 5 

출력 
5 


출처 : USACO (http://ace.delos.com) 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
struct s{
	int a,b,pos;
}d[9<<14];
int x(s i,s j){return i.a>j.a;}
int y(s i,s j){return i.b>j.b;}
int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d%d",&d[i].a,&d[i].b);
		d[i].pos=i;
	}
	sort(d,d+n,x);
	sort(d,d+k,y);
	printf("%d",d[0].pos+1);
}