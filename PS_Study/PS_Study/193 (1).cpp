/*
Prob No.193 : ���ڿ� ���� (Small) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 15    Accepted : 10
Background

N���� ���̷� �̷���� ���ڿ� S�� �Էµȴ�. 

�� ���ڿ��� �� ���ڵ�� ���ο� ���ڿ� T�� ��������Ѵ�. 

���ڿ�S�� ���ڿ� T�� ����� ��Ģ�� ������ ����. 

* ���ڿ� S�� ���� ���� ���� �ϳ��� ���ڿ� T�� �������� �߰��Ѵ�. 
* ���ڿ� S�� ���� ���� ���� �ϳ��� ���ڿ� T�� �������� �߰��Ѵ�. 

�� ��Ģ���� ������� ���ڿ� T�� �� ���������� ���� ���� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù ��° �ٿ� ���ڿ� S�� ���� N�� �Էµȴ�. 
���� �ٿ� N���� ���ڿ� S�� �Էµȴ�. 

* N�� 20������ �ڿ���
Output

������� ���������� ���� ���� ���ڿ��� ����Ѵ�.
IO Example

�Է� 
6 
ACDBCB 
8
ASDFGDSA

��� 
ABCBCD 

* ���� : 
1 - S="ACDBCB", T="" 
2 - S="CDBCB", T="A" 
3 - S="CDBC", T="AB" 
4 - S="CDB", T="ABC" 
5 - S="CD", T="ABCB" 
6 - S="D", T="ABCBC" 
7 - S="", T="ABCBCD" 
*/
#include<cstdio>
char d[2001],x[2001];
int n,i,j,k,l,c,f=-1;
int main(){	
	scanf("%d",&n);
	scanf("%s",d);
	for(i=0,j=n-1;i<=j;){
		if(d[i]<d[j]) x[c++]=d[i++];
		else if(d[i]>d[j]) x[c++]=d[j--];
		else{
			for(k=i,l=j;k<=j;){
				if(d[k]<d[l]){f=0; break;}
				else if(d[k]>d[l]){ f=1;break;}
				k++;l--;				
			}
			if(f==0) x[c++]=d[i++];
			else x[c++]=d[j--];
		}
	}
	printf("%s",x);
	return 0;
}