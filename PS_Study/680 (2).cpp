/*
1. ù ��° �ٿ� �ڿ��� n�� �־�����. (2��n��1,000,000) 
2. �� ��° �ٿ� ���� m�� �־�����. (0��m��999,998) 
3. n+m�� ¦���̴�.
Output

1. a+b=n�� a-b=m�� �Ǵ� �� �� a�� b�� ���Ͽ� ù ��° �ٿ� a�� ����Ѵ�. 
2. �� ��° �ٿ� b�� ����Ѵ�.
IO Example

�Է�1 
5 
1 

���1 
3 
2 

�Է�2 
1998 
0 

���2 
999 
999 
*/
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	cout<<(n+m)/2<<endl<<(n-m)/2;
	return 0;
}