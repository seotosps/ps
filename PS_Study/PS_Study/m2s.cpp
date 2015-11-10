/*
프로그램 명: m2s
제한시간: 1 초
분을 입력으로 받아 초로 변환하는 프로그램을 작성하시오.

입력

분 m 이 자연수로 주어진다. ( 1 <= m <= 60)
출력

변환 된 초를 출력 예의 형식으로 출력한다.
입출력 예

입력

2

출력

2 minutes is 120 seconds.

  */
#include<cstdio>
main(){
	int m;
	scanf("%d",&m);
	printf("%d minutes is %d seconds.",m,m*60);
}