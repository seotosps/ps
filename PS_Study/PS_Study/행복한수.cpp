#include<stdio.h>
// 자릿수의 제곱을 돌려주는 함수
int npow(int num){
	int sum=0;
	while(num){
		sum=sum+(num%10)*(num%10);
		num=num/10;
	}
	return sum;
}
int a[1001]={-1}; // 배열 초기화 ( -1 초기값 , 0 : 1회 참조 1 : 2회참조(행복한 수가 아니다))
int main(){
	int n=0,ch=0,i=0;
	scanf("%d",&n);
	for(i=n;i>0;i--){ // 주어진 정수보다 작거나 같은 정수 n을 감소하면서 비교
		ch=npow(i); // 제곱수를 구함
		do{
			if(ch==1) { // 행복한 수
				printf("%d",i);
				return 0;
			}
			else{ // 행복한 수가 되는지 살펴봄
				if(a[ch]==1) break; // 2회참조 행복한 수가 아님
				else{
					a[ch]++; // 해당 숫자의 참조 , 이 부분은 수정해야 실행시간이 더 단축될 듯
				}
			}
			ch = npow(ch); // 제곱수를 구함
		}while(1);
	}
	return 0;
}

