/*
두 정수 A, B (1 <= A <= B <= 2,000,000,000) 가 주어질때 A 와 B 사이 (A, B 포함) 에 약수 개수가 짝수인 수 개수를 출력하시오.

입력

두 정수 A, B 가 주어진다.
출력

약수 개수가 짝수인 수의 개수를 출력하시오.
입출력 예

입력

3 17

출력 

12
*/

#include<stdio.h>
int main(){
	int a, b,j,count=0,sum=0;
	scanf("%d%d",&a,&b);
	if(a>b) {
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(;a<=b;a++){
		for(j=0;j<32;j++)
			if(a>>j & 1 ==1) count++;
		if(count!=0 && count%2==0) 
			sum++;
		count=0;
			
	}
	printf("%d",sum);
	return 0;
}
	