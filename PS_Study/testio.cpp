#include<stdio.h>
int M[1000001];
int data[100001];
int main() {
    int n,i,j,result;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	M[0]=data[0];
	for(i=1;i<n;i++){
		if(data[i]>M[i-1]+data[i]) M[i]=data[i];
		else M[i]=M[i-1]+data[i];
	}
	result=M[0];
	for(i=0;i<n-1;i++)
		if(result<M[i+1]) result=M[i+1];
	printf("%d",result);
    return 0;
}
