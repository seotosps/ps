/*
예시1> 
입력 

15 
3 
5 4 3 

출력 
4 

예시2> 
입력 
10 
1 
2 

출력 
9 

예시3> 
입력 
7 
2 
1 1 

출력 
15 
*/
#include<stdio.h>
int f(int n,int r){
	if(n==r) return 1;
	if(r==1) return n;
	return f(n-1,r)+f(n-1,r-1);
}
int main(){
	int n,k,i,d,p=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++){
		scanf("%d",&d);
		p+=d;
	}
	printf("%d",f(n-p+1,k));
}
