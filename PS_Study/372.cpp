/*
Prob No.372 : IOIOI [CH04.3.Competition(JOI09)]

Time Limit(Test case) : 1000(ms)
Total Submit : 79    Accepted : 16
Background

정수 n (1<=n)에 대해서, n+1개의 I와 n개의 O를 I부터 시작하여 각각 하나씩 반복하여 만들어진 문자열을 Pn이라고 한다. 여기서 I와 O는 각각 대문자이다. 

P1 = IOI 
P2 = IOIOI 
P3 = IOIOIOI 
: 
Pn = IOIOIO....OI (O가 n개) 

정수 n과 I와 O로 만들어진 문자열 s가 주어질 때, s속에 Pn이 몇 개 포함되어 있는지를 구하는 프로그램을 작성하시오.
Input

첫째 줄에는 정수 n (1 <= n <= 1,000,000)이 입력되며, 
둘째 줄에는 정수 m( 1<=m<=1,000,000)이 입력된다. m은 s의 문자 수를 나타낸다. 
셋째 줄에는 문자열 s가 입력된다. s는 I와 O로 이루어진 문자열이다.
Output

문자열 s에 문자열 Pn이 몇 개 포함되었는지를 1개의 정수로 출력한다. s에 Pn이 포함되어 있지 않은 경우에는 0을 출력한다.
IO Example

입력 
1 
13 
OOIOIOIOIIOII 

출력 
4 

2
17
IOIOIOIOIOOIOIOOI

2
9
IOIOIOIOI

설명) 
OOIOIOIOIIOII, OOIOIOIOIIOII, OOIOIOIOIIOII , OOIOIOIOIIOII 로 4개가 포함되어 있다. 
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