/*
정수 20 개를 입력받아서 그 합과 평균을 출력하되 0 이 입력되면 20개 입력이 끝나지 않더라도 
그 때까지 입력된 합과 평균을 출력하는 프로그램을 작성하시오. 평균은 소수부분은 버리고 정수만 
출력한다.
  
5 9 6 8 4 3 0

35 5

  */
#include<stdio.h>

int main(){

	int n,i=0,count=0,result=0;

	for(i=0;i<20;i++,count++){
		scanf("%d",&n);
		if(n==0) break;
		result = result + n;	
	}

	printf("%d %d",result,result/count);

	return 0;
}

	
