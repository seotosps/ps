/*
fibonacci(3)�� fibonacci(2)�� fibonacci(1)�� ����� ���, 2�� �����Ѵ�.

�� ��, 1�� 2�� ��µǰ�, 0�� 1�� ��µȴ�. N�� �־����� ��, fibonacci(N)�� ȣ������ ��,
0�� 1�� ���� �� �� ��µǴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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