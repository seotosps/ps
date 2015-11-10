#include<stdio.h>

int main(){
	int a, b,i,j,k;
	scanf("%d%d",&a,&b);
	if(a>b){
		i=a;
		for(k=1;k<=9;k++){
			for(j=i;j>=b;j--)
				printf("%d * %d = %2d   ",j,k,j*k);
			printf("\n");
		}
	}
	else{
    	i=a;
		for(k=1;k<=9;k++){
			for(j=i;j<=b;j++)
				printf("%d * %d = %2d   ",j,k,j*k);
			printf("\n");
		}
	}



	return 0;
}

