/*
����1> 
�Է� 
8 
��� 
7 

����2> 
�Է� 
10 
��� 
10 

����3> 
�Է� 
355 
��� 
338 
*/
#include<stdio.h>
int a[1001];
int f(int n){
	int sum=0;
	do{
		sum=sum+(n%10)*(n%10);
		n=n/10;
	}while(n);
	return sum;
}
int main(){
	int n,k;
	scanf("%d",&k);
	a[k]=1;
	n=k;
	for(;n!=1;){
		n=f(n);	
		if(a[n]) n=--k;
		else a[n]=1;
	}
	printf("%d",k);
}

			