/*
자연수 n을 입력받아 "출력 예"와 같이 공백으로 구분하여 출력되는 프로그램을 작성하시오.

10 미만의 홀수만 출력하시오.

3

1 3 5
7 9 1
3 5 7

  */

#include<stdio.h>

int main(){

	int a[5]={1,3,5,7,9};
	int n,i,j,count=0;

	scanf("%d",&n);

	for(i=0; i< n;i++){
		for(j=0;j<n;j++)
			printf("%d ",a[count++%5]);
		printf("\n");
	}

	return 0;
}


	