#include<stdio.h>
int main(){
	int a,i,os,es;
	for(i=0;i<7;i++){
		scanf("%d",&a);
		if(a%2 && os<=a) os=a;
		if(!(a%2) && es<=a) es=a;
	}
	printf("%d",os+es);
}

