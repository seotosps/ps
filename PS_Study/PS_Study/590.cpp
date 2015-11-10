/*
Prob No.3 : Virus [Iamcoder#11-3]

Time Limit(Test case) : 500(ms)
Background

GSHS연구실에서 이번에 세상을 괴롭히는 바이러스를 검출하는 방법을 발견했다. 

이 바이러스가 있을 것으로 예상되는 위치에 개발한 약을 투여하면 이 바이러스는 모두 죽고 단 2마리가 살아남는다. 하지만 이 바이러스는 2마리만 있으면 다시 재발하는데 오랜 시간이 걸리지 않는다. 

따라서 이 남은 2마리의 바이러스를 박멸해야 한다. 이 약을 먹은 바이러스의 특징은 서로 최대한 가까이 접근한다. 따라서 주어진 샘플들 중 가장가까이 있는 2개체를 바이러스로 판단할 수 있다. 

약을 투여한 뒤 각 개체들의 좌표가 주어질 때 바이러스로 의심되는 두 개체의 거리를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 개체의 수를 나타내는 정수 n이입력된다. 단 10,000을 넘지 않는 자연수이다. 
다음 줄부터 n 줄에 걸쳐서 각 개체의 x, y 좌표가 공백으로 구분되어 입력된다. 단 각 값은 0.0 이상 100,000.0이하의 실수이다. 

단 실수형은 double형을 이용 하도록 한다.
Output

바이러스로 의심되는 가장 가까운 2개체의 거리를 소수점이하 2자리까지 출력한다.(%.2lf를 이용하시오.)
IO Example

입력 
3 
0.0 0.0 
1.0 1.0 
3.0 3.0 

출력 
1.41 
입력
6
1.0 0.0
3.0 1.0
2.0 3.0
3.0 2.0
4.0 4.0
1.0 5.0

출력
1.00


* 설명 : 이 경우에는 0.0 , 0.0 과 1.0, 1.0 이 가장 가까우므로 그 거리인 1.41을 출력한다. 
0점에서 각 점의 거리를 이용하여 정렬한 후
처음부터 두 점 사이의 거리를 검사하는 방법을 선택
*/
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
struct st{
	double a,b,c;	
}d[10000];
bool cmp1(const st &f1,const st &f2){return (f1.a>f2.a);}
bool cmp2(const st &f1,const st &f2){return (f1.b>f2.b);}
bool cmp3(const st &f1,const st &f2){return (f1.c>f2.c);}
int n,i;
double r=100000.0,x,y;
int f(){
	for(i=1;i<n;i++){
		x=(d[i].a-d[i-1].a);
		x=x*x;
		y=(d[i].b-d[i-1].b);
		y=y*y;
		if(r>sqrt(x+y)) r = sqrt(x+y);
	}
	return 0;
}
int main(){
	for(scanf("%d",&n);i<n;i++){
		scanf("%lf%lf",&d[i].a,&d[i].b);
		d[i].c=d[i].a*d[i].a+d[i].b*d[i].b;
	}
	sort(d,d+n,cmp1);
	f();
	sort(d,d+n,cmp2);	
	f();
	sort(d,d+n,cmp3);
	f();
	printf("%.2lf",r);
}