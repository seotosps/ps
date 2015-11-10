#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;

struct sd{
	int a, b, c;
}d[10];
int cmp(sd a, sd b){
	return a.c>b.c;
}
int cmp1(int a, int b){
	return a<b;
}
int main(){
	int k[10]={1, 5, 2 , 3, 9, 10, 4, 19,15,29};
	int i;
	for(i=0;i<10;i++){
		d[i].a=k[i];
		d[i].b=k[i];
		d[i].c=k[i];
	}
	sort(d,d+10, cmp);
	for(i=0;i<10;i++)
		printf("%d ",d[i].c);


	return 0;
}
