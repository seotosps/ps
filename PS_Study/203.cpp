/*
Prob No.203 : �ִ����� [2007 �������α׷��ִ�ȸ]

Time Limit(Test case) : 1000(ms)
Total Submit : 401    Accepted : 231
Background

�� ���� A, B, C�� �Է¹޾Ƽ� �ִ������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
Input

�� ���� a, b, c�� �������� ���еǾ� �־�����. 
(��, 1 <= a, b, c <= 100,000)
Output

�� ���� �ִ������� �� ������ ����Ѵ�.
IO Example

�Է� 
4 8 10 

��� 
2 
*/
#include<cstdio>
int a,b,c;int p(int a, int b){int c=0;while(b>0){c=b;b=a%b;a=c;}return c;}
main(){scanf("%d%d%d",&a,&b,&c);printf("%d",p(p(a,b),c));}
