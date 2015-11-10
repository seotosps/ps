/*
자연수를 입력받아 아래와 같은 사각형을 출력하는
프로그램을 작성하시오. (출력하는 부분은 함수로 작성하시오.) 


  
3

  


1 2 3
2 4 6
3 6 9
*/

#include<stdio.h>

void f(int n){
	int i,j;

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",i*j);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
