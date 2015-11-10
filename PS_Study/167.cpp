/*
Prob No.167 : �Ž����� II (NTTP) [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 742    Accepted : 91
Background

�������� �Ƿ��� �����޾� �� ���������� ����� �� �ִ� �ڵ��Ǹű�� ���α׷��� ������ �Ƿڹ޾Ҵ�. 
�̹����� ���� �ڵ��Ǹű⿡�� �̿��ڿ��� �Ž������� ������ ��, �Ž������� ���� ������ ���� ���� �����ϴ� ���̴�. 
�Է����� �Ž��� ����� ���� �׼��� �� ���󿡼� �̿��ϴ� ������ ���� �� �׸��� ������ ������ ���´�. 
�������� �� ���� �׼��� �Ž��� �ִ� �������� ����� �� ���� ���� ������ ����� ���ϴ� ���α׷��� �ۼ��ؾ� �ȴ�.
Input

ù ��° �ٿ��� �Ž��� ����� ���� �׼��� �Էµȴ�. (�� ���� 10000�� �����̴�.) 
���� �ٿ��� �� ���󿡼� ���Ǵ� ������ ������ ���� �Էµȴ�. (�� ������ ���� 10�����̴�.) 
������ �ٿ��� ������ �� ��ŭ�� ���� �׼��� ���� �������� �Էµȴ�. (������ �ִ밪�� 10000�� �����̴�.)
Output

�ּ��� ������ ���� ����Ѵ�.
IO Example

�Է� 
730 
5 
10 50 100 500 1250 

130 
5 
10 50 100 500 1250 

��� 
6 

����) 
500�� 1��, 100�� 2��, 10�� 3���� �����ϴ� ���� �ּ��̴�. ���� ���� 6 
*/
/*
// greedy�� Ǯ��

#include<stdio.h>  
int m=0,n,i;  
int main(){  
    int d[4]={500,100,50,10}; // ������ ũ��  
    scanf("%d",&n); //�Ž�����  
    for(i=0;n;i++){  
        m+=n/d[i];  
        n=n%d[i];   
    }  
    printf("%d",m);  
}  
*/

/*
//backtracking
#include<stdio.h>
// �׸��� ����
#include<algorithm>
using namespace std;
int cmp(int a, int b){
	return a>b;
}
int mi=0x7fffffff,dong[10],remain,n,i;
void f(int remain,int count){	
	if(mi<count || remain<0) return ; // ����ġ��
	if(remain==0){		
		if(mi>count) mi=count;
		return ;
	}	
	else{
		for(int i=0;i<n;i++)
			if(remain-dong[i]>=0) f(remain-dong[i],count+1);
	}
}
int main(){
	scanf("%d%d",&remain,&n);
	for(i=0;i<n;i++)
		scanf("%d",&dong[i]);	
	//�׸��� ���� �������� ����
	sort(dong,dong+n,cmp);
	f(remain,0);
	printf("%d",mi);
}
*/
/*
// divide and conquer
#include<stdio.h>
// m[10001] ���������� ������Ŵ
int dong[10],remain,n,i,m[10001];
int f(int remain){
	int i,t,mi=0x7fffffff;
	if(m[remain]==0){	// �̹̱��ش��� �˾ƺ�
		for(i=0; i<n;i++)
			if(dong[i]==remain) return m[remain]=1;
		for(i=0;i<n;i++){
			if(remain - dong[i] >=0) 
				t= f(remain-dong[i])+f(dong[i]);
			if(mi>t) mi=t;
		}
		m[remain]=mi;
	}
	return m[remain];
}
int main(){
	scanf("%d%d",&remain,&n);
	for(i=0;i<n;i++)
		scanf("%d",&dong[i]);	
	printf("%d",f(remain));
}


*/
// dynamic programming
#include<stdio.h>
int dong[20],remain,n,i,m[1000001],j;
int main(){
	scanf("%d%d",&remain,&n);
	int small;
	for(i=0;i<n;i++){
		scanf("%d",&dong[i]);	
		m[dong[i]]=1;
	}
	for(i=dong[0]*2;i<=remain;i+=dong[0]){
		for( j = 0, small = 0x7fffffff ; j < n ; j++ )
			if( i >= dong[j] && small > m[i-dong[j]]) small = m[i-dong[j]];
			m[i] = small + 1;
	}
				
	printf("%d",m[remain]);
}
