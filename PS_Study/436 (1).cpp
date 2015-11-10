/*
Prob No.436 : 두 정수의 약수 구하기 [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 440    Accepted : 51
Background

두 정수 a, b를 입력받아서 

정수 a의 약수의 집합과 정수 b의 약수의 집합의 합집합을 구하여 오름차순으로 출력하시오.
Input

첫 번째 줄에 두 정수 a, b가 공백으로 구분되어 입력된다. 
(1 <= a, b <= 100,000,000) TLE에 주의
Output

두 정수의 약수의 합집합을 오름차순으로 출력한다.
IO Example

입력 
4 6 

출력 
1 2 3 4 6 

*/
#include<cstdio>
#include<set>
using namespace std;
set<int> d;
int i=1,a,b;
int main(){
	scanf_s("%d%d",&a,&b);
	for(	d.insert(a),d.insert(b);i*i<=a || i*i<=b;i++){
		if(a%i==0){
			d.insert(i);
			if(i!=a/i)	d.insert(a/i);
		}
		if(b%i==0){
			d.insert(i);
			if(i!=b/i)	d.insert(b/i);
		}
	}

	for(set<int> ::iterator iter=d.begin();iter!=d.end();)printf("%d ",*iter++);
	return 0;
}
		


