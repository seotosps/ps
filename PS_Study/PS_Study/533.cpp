/*
Prob No.533 : 2 Player [CH04.1.Competition(IamCoder#5c)]

Time Limit(Test case) : 1000(ms)
Total Submit : 132    Accepted : 68
Background

강민이와 경곽이는 0~9까지의 숫자가 적힌 카드로 다음과 같은 놀이를 한다. 

처음에 2명이 각각 n장씩의 카드를 받는다. 받은 상태에서 받은 순서대로 뒤집에서 1열로 줄을 세운다. 

각 플레이어들은 위에서부터 서로 한장씩 뒤집어서 숫자의 크기를 비교한다. 

더 큰 숫자가 나온 플레이어가 2장의 카드를 가진다. 

이 때 가지는 카드에 적힌 숫자의 합이 획득한 점수가 된다. 

만약 2장의 카드가 같은 숫자가 적혀 있다면 이는 비긴 게임으로 각 카드에 적힌 점수는 자기 점수가 된다. 

게임이 끝난 뒤 2명의 점수를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 각자가 가지는 카드의 수 n이 입력된다. 단, n은 10,000이하의 자연수이다. 
두 번째 줄 부터 n번째 줄까지 강민이와 경곽이가 가지는 카드가 공백으로 구분되어 입력된다.
Output

강민이와 경곽이의 점수가 공백으로 구분되어 출력한다. 

* 테스트케이스의 70%는 n의 값이 1,000이하이다.
IO Example

입력 
3 
9 1 
5 4 
0 8 

출력 
19 8 
*/
#include<cstdio>
int n,a,b,i,j;
main(){for(scanf("%d",&n);n>0;n--){scanf("%d%d",&a,&b);if(a>b)i=i+a+b;if(a<b)j=j+a+b;if(a==b){i=i+a;j=j+b;}}printf("%d %d",i,j);}
