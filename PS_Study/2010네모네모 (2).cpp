/*
����1> 
�Է� 

15 
3 
5 4 3 

��� 
4 

����2> 
�Է� 
10 
1 
2 

��� 
9 

����3> 
�Է� 
7 
2 
1 1 

��� 
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
