/*
Prob No.507 : Dice game [CH04.1.Competition(IamCoder#3c)]

Time Limit(Test case) : 1000(ms)
Total Submit : 21    Accepted : 19
Background

태호와 진형이는 주사위 게임을 하고 있다. 

이 게임의 규칙은 간단하다, N개(1≤N≤1,000)의 칸이 직선으로 구성된 게임판의 1번 칸에서 시작하여 N번 칸에 도착하면 게임이 끝난다. 

각 칸에는 -999에서 999까지의 정수가 적혀있다. 주사위를 던져 나온 수 만큼 전진한다. 

전진 후 멈춘 칸에 적힌 숫자가 양수라면 다시 그 수만큼 더 전진하고, 음수라면 그 수만큼 후진한다. 숫자대로 움직인 후 다시 적힌칸의 수는 무시한다. 

만약 도착점보다 더 멀리 진행한다면 도착으로 인정한다. 그리고 1번 칸보다 더 후진해야하는 경우도 1번 칸에 멈춘 것으로 인정한다. 

게임 판과 M번(1≤M≤1,000)의 주사위 값이 주어질 때, 몇 번 주사위를 던진 후 게임이 끝나는지를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 N, M이 공백으로 구분되어 입력된다. 
둘 번째 줄부터 N줄에 걸쳐서 게임 판의 1~N칸에 적힌 숫자가 한 줄에 하나씩 입력된다. 
N+2번째 줄부터 M줄에 걸쳐서 M번의 주사위 값이 한 줄에 하나씩 입력된다.
Output

몇 번 주사위를 던지면 게임이 끝나는지를 출력한다. 

* 테스트 데이터 정보 없음
IO Example

입력 
10 5 
0 
0 
5 
6 
-3 
8 
1 
8 
-4 
0 
1 
3 
5 
1 
5 

출력 
5 

입력2 
10 10 
0 
-1 
-1 
4 
4 
-5 
0 
1 
-6 
0 
1 
5 
2 
4 
6 
5 
5 
4 
1 
6 

출력2 
6 
*/
#include<cstdio>
int d[1001],n,m,i,j,s=1,c=1,t;
main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;)
		scanf("%d",&d[i++]);
	for(i=1;i<=m;i++,c++){
		scanf("%d",&j);
		t=s+j+d[s+j];
		if(s+j>=n || t>=n) {
			printf("%d",c);
			break;
		}
		else if (t<1) s=1;
		else s=t;
	}
}

