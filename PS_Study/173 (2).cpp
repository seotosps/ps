#include<iostream>
int n;
using namespace std;
main(){
	cin>>n;
	n=n%1000000004;
	cout<<((((3*n)%1000000004)*n+5*n+2)/2)%1000000004;
}


	