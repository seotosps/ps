/*
Prob No.186 : Distance of Nodes [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 236    Accepted : 95
Background

������ ���� ��忡 ��ȣ�� �ο��� Ʈ���� �ִ�. 

 

�� ��� ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� �� ����� ��ȣ�� �������� ���еǾ� �Էµȴ�. 
(��, �� ����� ���� 1�̻� 2,100,000,000������ ���̴�.)
Output

�� ��尣�� �Ÿ��� ����Ѵ�.
IO Example

�Է� 
3 4 

��� 
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
	

