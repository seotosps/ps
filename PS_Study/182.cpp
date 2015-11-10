/*
Prob No.182 : 트리의 수 [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 640    Accepted : 203
Background

n을 입력받아서 n개의 노드로 구성되는 서로 다른 모양의 이진트리를 구하는 프로그램을 작성하시오. 

다음은 3개의 노드로 구성된 2진 트리의 예이다. 


Input

한 정수 n이 입력된다. (단 n은 20미만의 수이다.)
Output

n개로 만들 수 있는 서로 다른 2진 트리의 수를 출력한다.
IO Example

입력 
3 

출력 
5 
*/
#include<cstdio>
int d[21]={1,1},n,c,j,i,sum;
int main(){
	scanf("%d",&n);
	for(c=2;c<=n;c++){
		for(i=0,j=c-1;i<c&&j>=0;i++,j--)
			sum+=d[i]*d[j];
		d[c]=sum;
		sum=0;
	}
	printf("%d",d[n]);
}