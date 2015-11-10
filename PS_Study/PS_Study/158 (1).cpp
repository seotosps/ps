/*
Prob No.158 : N-Queen Level. I (NTTP) [CH02.3.Algorithm(Puzzle)]

Time Limit(Test case) : 1000(ms)
Total Submit : 238    Accepted : 97
Background

전산학에서 Backtracking문제로 N-Queen Problem이 유명하다. 
이 문제는 N*N체스 보드판에 N개의 Queen을 서로 공격하지 못하도록 배치하는 방법을 찾아내는 문제이다. 
아래 그림은 N이 4일 경우 Queen을 서로 공격하지 못하게 배치한 한 예를 나타낸다. 

 

체스판 크기 및 Queen의 수를 나타내는 N을 입력받아서 서로 공격하지 못하도록 배치하는 총 방법의 수를 구하는 프로그램을 작성하시오.
Input

정수 N이 입력으로 들어온다.( 3 <= N <= 9 )
Output

서로다른 총 경우의 수를 출력한다.
IO Example

입력 
4 

출력 
2 
*/
#include<stdio.h>
int x[13],c=0;
int abs(int a){
	if(a<0) return -a;
	return a;
}
int place(int k,int i){
	int j;
	for(j=1;j<k;j++)
		if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
			return 0;
	return 1;
}
void nqueen(int k,int n){
	int i,j;
	for(i=1;i<=n;i++)
		if(place(k,i)){
			x[k]=i;
			if(k==n)	
				c++;
			else
				nqueen(k+1,n);
		}
}
main()
{
	int n;
	scanf("%d",&n);
	nqueen(1,n);
	printf("%d",c);	
}