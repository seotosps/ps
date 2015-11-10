/*
Prob No.1 : KKOOII [Iamcoder#13-1]

Time Limit(Test case) : 1000(ms)
Background

경곽이는 KOI본선을 위해 열심히 준비하고 있다. 

경곽이는 올해 예선 대회에서 수학적인 문제만 출제되고 문자열을 다루는 문제가 없다는 사실로 본선에는 문자열 관련 문제가 나올 것이라 예상하고, 문자열 문제를 열심히 준비하기로 했다. 

따라서 문자열 중 KOI를 나타내는 각 문자 K, O, I의 3종류로 구성된 문자열 관련 공부를 하기 시작했다. 경곽이는 "주어진 문자열이 KOI라는 부분문자열을 가지는가?"라는 문제는 쉽게 풀 수 있었다. 

조금 더 어려운 문제를 풀고 싶었던 경곽이는 다음과 같은 문제를 생각했다. 

문자열 t가 문자열 s의 부분문자열이라는 것은 t의 맨 처음 및 마지막 몇 문자(0개도 가능)를 제거하면 s가 된다. 

예를 들어KKOOII는 OKKOOIIOKOI의 부분문자열이다. 한편 KOI는 KOOI의 부분문자열은 아니다. 

또 0이상의 정수 k에 대해서 레벨 k의 KOI열이라는 것은 K가 k번, O가 k번, I가 k번 순서대로 나타나는 문자열이다. 즉, KKOOII는 레벨 2인 KOI열이다. 

주어진 문자열의 부분문자열인 KOI열 중 레벨이 가장 높은 것을 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 K, O, I의 3종류로 이루어진 문자열 S가 입력된다. 
(단, S의 길이는 1,000,000이하의 자연수)
Output

가장 높은 레벨 k를 출력한다.
IO Example

입력 
OKKOOIIOKOI 

출력 
2 

입력2 
IKKIIKKK 

출력 
0 

입력3 
OOKKKKKKKOOOOIIIII 

출력 
4 
*/
#include<cstdio>
#include<string.h>
int i,os,oe,c,f,j,k,mi,l;
char d[9<<21];
int main(){
	scanf("%s",d);
	l=strlen(d);
	for(k=0;d[k];k++){
		if(d[k]=='O'){
			if(!f) {
				os=k;
				oe=k;
				f=1;
			}
			else oe++;
		}
		else if(f){
			c=oe-os+1;
			for(i=os-c,j=oe+c;i>=0 && j<l && d[i]=='K' && d[j]=='I';i++,j--);
			if(i==os && j==oe)if(mi < c) mi =c;				
			f=0;
		}
	}
	printf("%d",mi);	
}