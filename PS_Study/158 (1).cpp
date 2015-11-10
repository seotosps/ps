/*
Prob No.158 : N-Queen Level. I (NTTP) [CH02.3.Algorithm(Puzzle)]

Time Limit(Test case) : 1000(ms)
Total Submit : 238    Accepted : 97
Background

�����п��� Backtracking������ N-Queen Problem�� �����ϴ�. 
�� ������ N*Nü�� �����ǿ� N���� Queen�� ���� �������� ���ϵ��� ��ġ�ϴ� ����� ã�Ƴ��� �����̴�. 
�Ʒ� �׸��� N�� 4�� ��� Queen�� ���� �������� ���ϰ� ��ġ�� �� ���� ��Ÿ����. 

 

ü���� ũ�� �� Queen�� ���� ��Ÿ���� N�� �Է¹޾Ƽ� ���� �������� ���ϵ��� ��ġ�ϴ� �� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

���� N�� �Է����� ���´�.( 3 <= N <= 9 )
Output

���δٸ� �� ����� ���� ����Ѵ�.
IO Example

�Է� 
4 

��� 
2 
*/
#include<stdio.h>
int x[13],c=0;
int abs(int a){
	if(a<0) return -a;
	return a;
}
int place(int k,int i){
	int j;
	for(j=1;j<k;j++)
		if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
			return 0;
	return 1;
}
void nqueen(int k,int n){
	int i,j;
	for(i=1;i<=n;i++)
		if(place(k,i)){
			x[k]=i;
			if(k==n)	
				c++;
			else
				nqueen(k+1,n);
		}
}
main()
{
	int n;
	scanf("%d",&n);
	nqueen(1,n);
	printf("%d",c);	
}