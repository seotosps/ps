#include<iostream>
using namespace std;
int f(int n){
	int count=0;
	while(n){
		if(n%10==4) count++;
		n=n/10;
	}
	return count;
}
int main(){
	int i,count=0;
	for(i=0;i<=4829;i++)
		count+=f(i);
	cout<<count;
	return 0;
}
