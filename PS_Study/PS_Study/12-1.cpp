#include<stdio.h>


int main(){

	int arr[2][3]={{1,2,3},{4,5,6}};

	printf("%d\n",arr);
	printf("%d\n",&arr);

	printf("%d\n",arr+1);
	printf("%d\n",&arr+1);


	return 0;
}