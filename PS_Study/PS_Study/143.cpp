/*
�ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.

3

*****
 
 ***
 
  *
 
 ***
 
*****
*/

#include<stdio.h>

int main(){
	
	int n,i=0,j=0,blank=0;
	scanf("%d",&n);

	for(i=n;i>0;i--){
		for(blank=n-i;blank>0;blank--)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
		printf("\n");
		
	}
		
	i++;
	for(;i<n;i++){		
		for(blank=i;blank<n-1;blank++)
			printf(" ");		
		for(j=1;j<=2*i+1;j++)
			printf("*");
		printf("\n");
		
	}

	return 0;
}



