/*
Prob No.186 : Distance of Nodes [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 236    Accepted : 95
Background

다음과 같이 노드에 번호가 부여된 트리가 있다. 

 

두 노드 간의 거리를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에 두 노드의 번호가 공백으로 구분되어 입력된다. 
(단, 두 노드의 값은 1이상 2,100,000,000이하의 값이다.)
Output

두 노드간의 거리를 출력한다.
IO Example

입력 
3 4 

출력 
3 
*/
#include<cstdio>
int a,b,i,j,ci,cj,d;
int main(){
	scanf("%d%d",&a,&b);
	for(i=a,j=b;(i>=1 || j>=1 ) && i!=j;){
		if(i!=0) {
			i/=2;
			ci++;
		}
		if(j!=0) {
			j/=2;
			cj++;
		}
	}
	while(cj!=ci){
		if(ci>cj){
			a=a/2;
			ci--;
		}
		else{
			b=b/2;
			cj--;
		}
		d++;
	}
	while(a!=b){
			if(a!=1)a=a/2;
			if(b!=1)b=b/2;
			d+=2;
	}
	printf("%d",d);

}
	

