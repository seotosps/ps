#include<iostream>
using namespace std;

void right_rotate(int a[],int s, int t){
	int i,temp;
	temp=a[t];
	for(i=t;i>s;i--)
		a[i]=a[i-1];
	a[s]=temp;
}

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9};
	int i;
	for(i=0;i<10;i++)
		cout<<a[i]<<" " ;
	cout<<endl;

	right_rotate(a,2,6);

	for(i=0;i<10;i++)
		cout<<a[i]<<" " ;
	return 0;
}
