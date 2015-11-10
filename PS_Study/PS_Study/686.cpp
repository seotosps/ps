/*
Prob No.686 : 격자 값 계산 [CH04.1.Competition(GTPC12)]

Time Limit(Test case) : 1000(ms)
Total Submit : 26    Accepted : 17
Background

5×5 격자판에 25개의 자연수가 있다. 

18 78 53 45 1

64 85 12 16 75

45 35 28 75 90

2 15 28 11 37

75 41 7 89 25


여기서 1행의 최댓값은 78이고 2행은 85, 3행은 90, 4행은 37, 5행은 89이다. 1열의 최댓값은 75이고 2열은 85, 3열은 53, 4열은 89, 5열은 90이다. 

각 행의 최댓값 합계는 379이고 각 열의 최댓값 합계는 392이다. 두 합계의 차이는 13이다. 

각 행의 최댓값 합계와 각 열의 최댓값 합계의 차를 절댓값으로 출력하는 프로그램을 작성하시오.
Input

첫째 줄부터 다섯째 줄까지 100 미만의 자연수들이 한 줄에 다섯 개씩 공백으로 구분되어 입력된다.
Output

각 행의 최댓값 합계와 각 열의 최댓값 합계의 차를 절댓값으로 출력한다.
IO Example

입력 
18 78 53 45 1 
64 85 12 16 75 
45 35 28 75 90 
2 15 28 11 37 
75 41 7 89 25 

출력 
13 
*/
#include<iostream>
using namespace std;
int main(){
	int d[5][5];
	int rmax=0,cmax=0,max=0,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>d[i][j];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(max < d[i][j]) max =d[i][j];
		}
		rmax+=max;
		max=0;
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(max < d[j][i]) max =d[j][i];
		}
		cmax+=max;
		max=0;
	}
	rmax=rmax-cmax;
	if(rmax>0) cout<<rmax;
	else cout<<-rmax;
	return 0;
}