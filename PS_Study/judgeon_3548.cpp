#include<iostream>
#include<stack>
#include<map>
using namespace std;

stack<int> op;
stack<char> cal;
map<char,int> m;


int main(){
	m['(']=0;
	m['+']=1;
	m['-']=1;
	m['*']=2;
	m['/']=2;
	m[')']=3;
	char str[100];
	scanf("%s",str);
	int tmp=0,flag=0;
	for(int i=0;str[i]!=0;i++){
		if(str[i] >='0' && str[i] <='9'){
			//숫자이면 숫자의 크기 계산
			tmp=tmp*10+str[i]-'0';
			flag =1;
		}
		else{
			if(flag){ op.push(tmp);	tmp=0; } // 숫자가 들어온 후 연산자가 입력되면 숫자값을 스택에 넣는다.
			while(!cal.empty()){
				if(m[cal.top()] < m[str[i]]){
					cal.push(str[i]);
					break;
				}
				else{
