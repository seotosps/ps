/*
Prob No.372 : IOIOI [CH04.3.Competition(JOI09)]

Time Limit(Test case) : 1000(ms)
Total Submit : 79    Accepted : 16
Background

���� n (1<=n)�� ���ؼ�, n+1���� I�� n���� O�� I���� �����Ͽ� ���� �ϳ��� �ݺ��Ͽ� ������� ���ڿ��� Pn�̶�� �Ѵ�. ���⼭ I�� O�� ���� �빮���̴�. 

P1 = IOI 
P2 = IOIOI 
P3 = IOIOIOI 
: 
Pn = IOIOIO....OI (O�� n��) 

���� n�� I�� O�� ������� ���ڿ� s�� �־��� ��, s�ӿ� Pn�� �� �� ���ԵǾ� �ִ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input

ù° �ٿ��� ���� n (1 <= n <= 1,000,000)�� �ԷµǸ�, 
��° �ٿ��� ���� m( 1<=m<=1,000,000)�� �Էµȴ�. m�� s�� ���� ���� ��Ÿ����. 
��° �ٿ��� ���ڿ� s�� �Էµȴ�. s�� I�� O�� �̷���� ���ڿ��̴�.
Output

���ڿ� s�� ���ڿ� Pn�� �� �� ���ԵǾ������� 1���� ������ ����Ѵ�. s�� Pn�� ���ԵǾ� ���� ���� ��쿡�� 0�� ����Ѵ�.
IO Example

�Է� 
1 
13 
OOIOIOIOIIOII 

��� 
4 

2
17
IOIOIOIOIOOIOIOOI

2
9
IOIOIOIOI

����) 
OOIOIOIOIIOII, OOIOIOIOIIOII, OOIOIOIOIIOII , OOIOIOIOIIOII �� 4���� ���ԵǾ� �ִ�. 
*/
#include<cstdio>
char d[1000001];
int n,m,i,m_sp,count,result;
int main(){
	scanf("%d%d",&n,&m);
	scanf("%s",d);
	for(i=0;i<m-1;){
		if(d[i]=='I' && d[i+1]=='O'){
			count++;
			if(!m_sp && d[i+2]=='I') m_sp=i+2;
			if(count==n && d[i+2]=='I'){
				result++;
				i=m_sp;
				m_sp=0;
				count=0;
			}
			else{
				i+=2;
			}		
		}
		else{
			i++;
		}
	}
	printf("%d",result);
}


	/*
	for(i=0;i<m-2;){
		if(d[i]== 'I' && d[i+1]=='O') {
			c++;
			if(c!=n) {
				i=i+2;
				if(!f) f=i;
				continue;
			}
			else{
				f=i+2;
			}
		}
		else {
			f=0;
			c=0;
		}
		if(n==c && d[i+2]=='I') {
			r+=1;
			c=0;
			i=f;
			f=0;
		}
		else i++;
	}
	printf("%d",r);
	*/
//}