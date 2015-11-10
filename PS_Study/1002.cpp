/*
김예진의 좌표 (x1, y1)와 손승주의 좌표 (x2, y2)가 주어지고, 김예진이 계산한 류재명과의 거리 r1과 손승주이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.
*/
/* 두 좌표 사이의 거리를 계산한다.

그리고 r1, r2의 합을 계산하여 두점사이의 거리보다 크냐? 같냐? 작으냐?를 비교하면 된다


*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x1,y1,r1,x2,y2,r2,n,i,D=0,T=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		D=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		T=D-(r1+r2)*(r1+r2);
		if(T>0)
			cout<<"0\n";		
		else if(T==0)
			cout<<"1\n";
		else
			cout<<"2\n";
	}
	return 0;
}


