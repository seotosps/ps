/*
Prob No.600 : 3�� ��� [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 120    Accepted : 42
Background

���̰� n�� �������� �Է¹޾Ƽ� 3�� ����̸� True, �ƴϸ� False�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� �������� ���� n�� �Էµȴ�. 
���� �ٿ� 0, 1�� �̷���� ���� n�� ���ڿ��� �Էµȴ�. 
(��, n�� 100,000������ �ڿ���)
Output

�� �������� 3�� ������ True, �ƴϸ� False�� ����Ѵ�.
IO Example

�Է� 
3 
110 

��� 
True 

�Է�2 
3 
111 

��� 
False 
*/
#include<cstdio>
int n,k,i;
char d[9<<20];
int main(){	
	for(scanf("%d%s",&n,d);--n>=0;){
		if(d[n]-48){
			if(n%2) k+=2;
			else k++;
		}
	}
	printf("%s",k%3?"False":"True");
	return 0;
}