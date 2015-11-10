/*
4행 2열의 배열을 입력받아 가로평균과 세로평균 
그리고 전체평균을 출력하는 프로그램을 작성하시오. 
(소수점 이하는 버림 한다.)

  
16 27
39 100
19 88
61 20

가로평균 21 69 53 40
세로평균 33 58
전체평균 46
*/

#include<stdio.h>

int main(){
	int a[4][2];

	int vs=0, hs1=0,hs2=0, total=0;

	int i,j;

	for(i=0;i<4;i++)
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			total+=a[i][j];
		}

	printf("가로평균 ");

	for(i=0;i<4;i++)
		printf("%d ",(a[i][0]+a[i][1])/2);
	printf("\n세로평균 ");
	for(i=0;i<4;i++){
		hs1+=a[i][0];
		hs2+=a[i][1];
	}
	printf("%d %d\n",hs1/4,hs2/4);
	printf("전체평균 %d",total/8);
	return 0;
}
