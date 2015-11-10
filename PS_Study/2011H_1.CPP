/*
6
3 1 2
2 3 1
3 1 2
1 2 3
3 1 2
1 2 3


1 13
*/

#include<stdio.h>
int n, a[4],b[4],c[4];

int main(){
	int i=0;
	int max=0,temp=0;
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		scanf("%d%d%d",&a[0],&b[0],&c[0]);
		if(a[0]==3) a[3]++;
		if(b[0]==3) b[3]++;
		if(c[0]==3) c[3]++;
		if(a[0]==2) a[2]++;
		if(b[0]==2) b[2]++;
		if(c[0]==2) c[2]++;
		if(a[0]==1) a[1]++;
		if(b[0]==1) b[1]++;
		if(c[0]==1) c[1]++;
	}
	a[0]=a[3]*3+a[2]*2+a[1]*1;
	b[0]=b[3]*3+b[2]*2+b[1]*1;
	c[0]=c[3]*3+c[2]*2+c[1]*1;
	temp=a[0];
	max=1;
	if(temp<b[0]) {
		temp=b[0];
		max=2;
	}
	if(temp<c[0]) {
		temp=c[0];
		max=3;
	}
	
	if(a[0]== b[0] && b[0]==c[0]) printf("0 ");

	



	printf("%d",temp);


	


}
