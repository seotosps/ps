//�����͸� �̿��� �������ϱ�

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int nArray[10];
	int* p=&nArray[0];

	for(;p-nArray<10;p++)
		*(p)=p-nArray;
	
	for(;p-nArray>0;)
		cout<<*(--p)<<endl;
	return 0;

}