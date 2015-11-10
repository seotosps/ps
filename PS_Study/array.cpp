#include<stdio.h>
int main(){
	int a[100][100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			a[i][j]=i*n+(j+1);		
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}