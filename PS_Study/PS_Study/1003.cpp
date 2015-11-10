/*
fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.

이 때, 1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때,
0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.
		x  y
f(0) =  1  0
f(1) =  0  1
f(2) =  f(1).x + f(0)x, f(1).y+f(0).y
f(3) =  f(2).x+f(1).x, f(2).y + f(1).y
....

*/
#include<iostream>
using namespace std;
struct S{
	int c0,c1,flag;
}data[100];
int main()
{
	int n,i,f,j;
	cin>>n;
	data[0].c0=1;
	data[0].c1=0;
	data[0].flag=1;
	data[1].c0=0;
	data[1].c1=1;
	data[1].flag=1;
	for(i=0;i<n;i++)
	{
		cin>>f;
		if(data[f].flag==1) {
			cout<<data[f].c0<<" "<<data[f].c1<<endl;
		}
		else{
			for(j=2;j<=f;j++){
				data[j].c0=data[j-1].c0+data[j-2].c0;
				data[j].c1=data[j-1].c1+data[j-2].c1;
				data[j].flag=1;
			}
			cout<<data[f].c0<<" "<<data[f].c1<<endl;
		}
	}
	return 0;	
}