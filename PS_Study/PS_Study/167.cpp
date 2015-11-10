/*
Prob No.167 : 거스름돈 II (NTTP) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 742    Accepted : 91
Background

여러분은 실력을 인정받아 전 세계적으로 사용할 수 있는 자동판매기용 프로그램의 개발을 의뢰받았다. 
이번에도 역시 자동판매기에서 이용자에게 거스름돈을 남겨줄 때, 거스름돈에 사용될 동전의 수를 가정 적게하는 것이다. 
입력으로 거슬러 줘야할 돈의 액수와 그 나라에서 이용하는 동전의 가지 수 그리고 동전의 종류가 들어온다. 
여러분은 그 돈의 액수를 거슬러 주는 여러가지 방법들 중 가장 적은 동전은 몇개인지 구하는 프로그램을 작성해야 된다.
Input

첫 번째 줄에는 거슬러 줘야할 돈의 액수가 입력된다. (이 값은 10000원 이하이다.) 
다음 줄에는 그 나라에서 사용되는 동전의 종류의 수가 입력된다. (단 동전의 수는 10이하이다.) 
마지막 줄에는 동전의 수 만큼의 동전 액수가 오름 차순으로 입력된다. (동전의 최대값은 10000원 이하이다.)
Output

최소의 동전의 수를 출력한다.
IO Example

입력 
730 
5 
10 50 100 500 1250 

130 
5 
10 50 100 500 1250 

출력 
6 

설명) 
500원 1개, 100원 2개, 10원 3개로 지불하는 것이 최소이다. 따라서 답은 6 
*/
/*
// greedy로 풀기

#include<stdio.h>  
int m=0,n,i;  
int main(){  
    int d[4]={500,100,50,10}; // 동전의 크기  
    scanf("%d",&n); //거스름돈  
    for(i=0;n;i++){  
        m+=n/d[i];  
        n=n%d[i];   
    }  
    printf("%d",m);  
}  
*/

/*
//backtracking
#include<stdio.h>
// 그리디 도입
#include<algorithm>
using namespace std;
int cmp(int a, int b){
	return a>b;
}
int mi=0x7fffffff,dong[10],remain,n,i;
void f(int remain,int count){	
	if(mi<count || remain<0) return ; // 가지치기
	if(remain==0){		
		if(mi>count) mi=count;
		return ;
	}	
	else{
		for(int i=0;i<n;i++)
			if(remain-dong[i]>=0) f(remain-dong[i],count+1);
	}
}
int main(){
	scanf("%d%d",&remain,&n);
	for(i=0;i<n;i++)
		scanf("%d",&dong[i]);	
	//그리디를 위한 내림차순 정렬
	sort(dong,dong+n,cmp);
	f(remain,0);
	printf("%d",mi);
}
*/
/*
// divide and conquer
#include<stdio.h>
// m[10001] 분할정복을 발전시킴
int dong[10],remain,n,i,m[10001];
int f(int remain){
	int i,t,mi=0x7fffffff;
	if(m[remain]==0){	// 이미구해는지 알아봄
		for(i=0; i<n;i++)
			if(dong[i]==remain) return m[remain]=1;
		for(i=0;i<n;i++){
			if(remain - dong[i] >=0) 
				t= f(remain-dong[i])+f(dong[i]);
			if(mi>t) mi=t;
		}
		m[remain]=mi;
	}
	return m[remain];
}
int main(){
	scanf("%d%d",&remain,&n);
	for(i=0;i<n;i++)
		scanf("%d",&dong[i]);	
	printf("%d",f(remain));
}


*/
// dynamic programming
#include<stdio.h>
int dong[20],remain,n,i,m[1000001],j;
int main(){
	scanf("%d%d",&remain,&n);
	int small;
	for(i=0;i<n;i++){
		scanf("%d",&dong[i]);	
		m[dong[i]]=1;
	}
	for(i=dong[0]*2;i<=remain;i+=dong[0]){
		for( j = 0, small = 0x7fffffff ; j < n ; j++ )
			if( i >= dong[j] && small > m[i-dong[j]]) small = m[i-dong[j]];
			m[i] = small + 1;
	}
				
	printf("%d",m[remain]);
}
