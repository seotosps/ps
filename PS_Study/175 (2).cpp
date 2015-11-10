/*
정수 N(N <= 15)을 입력받고 다시 N개의 정수를 입력받아 
내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
 (입력과 출력, 정렬은 모두 함수를 이용할 것)

  
5
12 35 1 48 9

  

48 35 12 9 1
*/

#include<stdio.h>
int n;

void usort(int *ap){

	int pos=0,temp=0;
	int i,j,k;
	for(i=1;i<n;i++){
		pos=ap[i];
		for(j=i;j>0;j--)
			if(pos<ap[j-1]) break;
		for(k=i;k>j;k--)
			ap[k]=ap[k-1];
		ap[j]=pos;
	}

}
void input(int * ap){
	int i=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",ap+i);
}
void output(int *ap){
	int i=0;
	for(i=0;i<n;i++)
		printf("%d ",*(ap+i));

}

int main(){
	int a[15]={0};
	input(a);
	usort(a);
	output(a);
	return 0;
}