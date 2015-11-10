/*
프로그램 명: sec(open)
제한시간: 1 초
초가 입력으로 주어질 때 이를 몇 날 몇 시간 몇 분 몇 초 인지를 변경하는 프로그램을 작성.

입력

초(second)가 입력으로 주어진다. 10 000 000 이하의 정수
출력

4 개의 정수가 출력된다.
날 시 분 초

입출력 예

입력

70

출력

0 0 1 10
*/
#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d ",n/(3600*24));
	n=n%(3600*24);
	printf("%d ",n/3600);
	n=n%3600;
	printf("%d ",n/60);
	n=n%60;
	printf("%d",n);
	return 0;
}
	
