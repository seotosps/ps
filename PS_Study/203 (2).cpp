/*
Prob No.203 : 최대공약수 [2007 교원프로그래밍대회]

Time Limit(Test case) : 1000(ms)
Total Submit : 401    Accepted : 231
Background

세 정수 A, B, C를 입력받아서 최대공약수를 구하는 프로그램을 작성하시오. 
Input

세 정수 a, b, c가 공백으로 구분되어 주어진다. 
(단, 1 <= a, b, c <= 100,000)
Output

세 수의 최대공약수를 한 정수로 출력한다.
IO Example

입력 
4 8 10 

출력 
2 
*/
#include<cstdio>
int a,b,c;int p(int a, int b){int c=0;while(b>0){c=b;b=a%b;a=c;}return c;}
main(){scanf("%d%d%d",&a,&b,&c);printf("%d",p(p(a,b),c));}
