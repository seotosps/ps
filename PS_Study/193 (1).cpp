/*
Prob No.193 : 문자열 생성 (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 15    Accepted : 10
Background

N개의 길이로 이루어진 문자열 S가 입력된다. 

이 문자열의 각 문자들로 새로운 문자열 T를 만들려고한다. 

문자열S로 문자열 T를 만드는 규칙은 다음과 같다. 

* 문자열 S의 가장 앞의 문자 하나를 문자열 T의 마지막에 추가한다. 
* 문자열 S의 가장 뒤의 문자 하나를 문자열 T의 마지막에 추가한다. 

위 규칙으로 만들어진 문자열 T들 중 사전순으로 가장 빠른 문자열을 출력하는 프로그램을 작성하시오.
Input

첫 번째 줄에 문자열 S의 길이 N이 입력된다. 
다음 줄에 N개의 문자열 S가 입력된다. 

* N은 20이하의 자연수
Output

만들어진 사전순으로 가장 빠른 문자열을 출력한다.
IO Example

입력 
6 
ACDBCB 
8
ASDFGDSA

출력 
ABCBCD 

* 설명 : 
1 - S="ACDBCB", T="" 
2 - S="CDBCB", T="A" 
3 - S="CDBC", T="AB" 
4 - S="CDB", T="ABC" 
5 - S="CD", T="ABCB" 
6 - S="D", T="ABCBC" 
7 - S="", T="ABCBCD" 
*/
#include<cstdio>
char d[2001],x[2001];
int n,i,j,k,l,c,f=-1;
int main(){	
	scanf("%d",&n);
	scanf("%s",d);
	for(i=0,j=n-1;i<=j;){
		if(d[i]<d[j]) x[c++]=d[i++];
		else if(d[i]>d[j]) x[c++]=d[j--];
		else{
			for(k=i,l=j;k<=j;){
				if(d[k]<d[l]){f=0; break;}
				else if(d[k]>d[l]){ f=1;break;}
				k++;l--;				
			}
			if(f==0) x[c++]=d[i++];
			else x[c++]=d[j--];
		}
	}
	printf("%s",x);
	return 0;
}