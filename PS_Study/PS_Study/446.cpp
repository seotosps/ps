/*
Prob No.446 : ���İ�� I [CH02.1.Algorithm(Exist)]

Time Limit(Test case) : 1000(ms)
Total Submit : 287    Accepted : 71
Background

�̹� GSHS������ ������ ����ϴ� ���α׷� �ۼ��̾���. 

�����е��� �� ���İ�� ���α׷��� �ϼ��ϴ� ���� �����̴�. 

������ ���� ������ �Էµ� �� �� ������� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

��, ������ ������ �������θ� �����ȴ�.
Input

ù ��° �ٿ� ������ �Էµȴ�. 
���Ŀ��� ������ ������, �� ���̴� �ִ� 20�ڸ� ���� �ʴ´�. 
�ݵ�� �ϳ� �̻��� �����ڸ� �����Ѵ�.
Output

������ ��� ����� ����Ѵ�.
IO Example

�Է�1 
12+3 

���1 
15 

�Է�2 
123-100 

���2 
23 
*/
#include<cstdio>
#include<stack>
using namespace std;
stack<int> k;
stack<char> c;
int i, a, b,f;
int main(){
	char s[20];
	scanf("%s",s);
	for(i=0;s[i];i++){
		if(s[i]<48 && k.empty()){
			k.push(a);
			a=0;
		}
		else if(!k.empty() && s[i]<48){
			if(c.top()=='+')a=k.top()+a;
			else a=k.top()-a;
			k.pop();
			k.push(a);
			a=0;
		}
		else	a=a*10+s[i]-48;		
	}
	if(c.top()<44)b+=k.top()+a;
	else b-=k.top()-a;
	
	printf("%d",b);
	
		
}