/*
Prob No.399 : ��� (Special Judge) [CH04.2.Competition(KOI10Es)]

Time Limit(Test case) : 1000(ms)
Total Submit : 150    Accepted : 20
Background

KOI �μ� ���п����ҿ����� ���� ������ �꼺 ��װ� ��Į���� ����� �����ϰ� �ִ�. �� ��׿��� �� ����� Ư���� ��Ÿ���� �ϳ��� ������ �־����ִ�. �꼺 ����� Ư������ 1���� 1,000,000,000������ ���� ������ ��Ÿ����, ��Į���� ����� Ư������ -1���� -1,000,000,000������ ���� ������ ��Ÿ����. 
���� ���� �� ����� ȥ���� ����� Ư������ ȥ�տ� ���� �� ����� Ư������ ������ �����Ѵ�. �� �����ҿ����� ���� ���� �� ����� ȥ���Ͽ� Ư������ 0�� ���� ����� ����� ������� �Ѵ�. 
���� ���, �־��� ��׵��� Ư������ [-99, -2, -1, 4, 98]�� ��쿡�� Ư������ -99�� ��װ� Ư������ 98�� ����� ȥ���ϸ� Ư������ -1�� ����� ���� �� �ְ�, �� ����� Ư������ 0�� ���� ����� ����̴�. ������, �� ������ ��Į���� ��׸����γ� Ȥ�� �� ������ �꼺 ��׸����� Ư������ 0�� ���� ����� ȥ�� ����� ����� ��쵵 ������ �� �ִ�. 

�꼺 ��װ� ��Į���� ����� Ư������ ���ĵ� ������ �־����� ��, �� �� �� ���� ���� �ٸ� ����� ȥ���Ͽ� Ư������ 0�� ���� ����� ����� ������ �� ����� ã�� ���α׷��� �ۼ��Ͻÿ�.
Input

ù° �ٿ��� ��ü ����� �� N�� �Էµȴ�. N�� 2 �̻� 100,000 ������ �����̴�. ��° �ٿ��� ����� Ư������ ��Ÿ���� N���� ������ ��ĭ�� ���̿� �ΰ� ������������ �ԷµǸ�, �� ������ ��� -1,000,000,000 �̻� 1,000,000,000 �����̴�. N���� ��׵��� Ư������ ��� ���� �ٸ���, �꼺 ��׸����γ� ��Į���� ��׸����� �Է��� �־����� ��쵵 ���� �� �ִ�.
Output

ù° �ٿ� Ư������ 0�� ���� ����� ����� ������ �� ����� Ư������ ����Ѵ�. ����ؾ��ϴ� �� ����� Ư������ ������������ ����Ѵ�. Ư������ 0�� ���� ����� ����� ������ ��찡 �� �� �̻��� ��쿡�� �� �� �ƹ����̳� �ϳ��� ����Ѵ�.
IO Example

�Է�1) 
5 
-99 -2 -1 4 98 

���1) 
-99 98 

�Է�2) 
4 
-100 -2 -1 103 

���2) 
-2 -1 
*/
#include<stdio.h>
#include<algorithm>
using namespace std;
int n,data[100001],mi=0x7fffffff,fp,sp,i,j,tmp;
int absn(int a){
	return a>=0? a: -a;
}
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d", data+i);
	sort(data+1,data+n);
	for(i=1,j=n;mi!=0 && i!=j;){
		tmp=data[i]+data[j];
		if(absn(tmp) <mi ){
			fp=i;
			sp=j;
			mi=absn(tmp);
		}
		if(tmp <0) i++;
		else if(tmp >0) j--;
	}
	printf("%d %d",data[fp],data[sp]);
}