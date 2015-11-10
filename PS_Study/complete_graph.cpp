/*
프로그램 명: complete_graph
제한시간: 1 초
꼭지점(vertex)의 수 n 이 주어질 때 임의의 점에서 다른 점으로 바로 가는 길이 존재할 때 선의 수(edge) 을 구하는 것이 문제이다.

n 이 4 이면 6 개의 선이 존재한다.



입력

n 이 주어진다. n 은 2 이상 1000 이하의 정수이다.
출력

선의 수를 출력한다.
입출력 예

입력

4

출력

6
* 이러한 그래프를 완전 그래프(complete graph)라 합니다.
*/

// (n-1)*n/2

#include<cstdio>
main(){int n;scanf("%d",&n);printf("%d",(n*n-n)/2);}
