/*
Prob No.474 : 개미와 정사면체 [CH02.3.Algorithm(perf11.2)]

Time Limit(Test case) : 1000(ms)
Total Submit : 216    Accepted : 54
Background

정사면체에서 4개의 꼭지점을 각각 ABCD라고 한다. 개미가 B에서 시작해서 한 턴에 한 칸씩 무조건 움직인다고 한다. 

 

한 정수 n을 입력받아서 n턴 후에 A점 위에 있을 확률을 구하는 프로그램을 작성하시오.
Input

한 정수 n이 입력된다. (단 n은 40미만의 값이다.)
Output

p/q형태로 출력한다. (단, p,q는 서로소)
IO Example

입력 
4 

출력 
20/81 

출제 - 김정준(GSHS_28th) 
*/
#include<cstdio>
long long d[41],a[41],n,i,k;
main(){
	for(i=1,d[0]=a[0]=1,scanf("%lld",&n);i<=n;)a[i++]=a[i-1]*3;
	for(i=1;i<n;)d[i++]=a[i]-d[i-1];
	if(n)printf("%lld/%lld",d[n-1],a[n]);
	else printf("0");
}	

