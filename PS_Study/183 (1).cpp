/*
Prob No.183 : Big Number [CH02.2.Algorithm(Design)]

Time Limit(Test case) : 1000(ms)
Total Submit : 123    Accepted : 15
Background

�� ū ���� a, b�� �Է¹޾� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

��, �ԷµǴ� ������ a, b ������ -10^100 <= a, b <= 10^100�̴�.
Input

ù ��° �ٿ� �� ���� a, 
�� ��° �ٿ� �ٸ� ���� b�� �Էµȴ�.
Output

�� ������ ���� ����Ѵ�.
IO Example

�Է� 
123456789123456789 
21 

��� 
123456789123456810 
*/
#include<cstdio>
#include<string.h>
char a[10001],b[10001],c[10001],t;
int main(){
	int i,j=0;
	scanf("%s%s",a,b);
	for(i=strlen(a)-1;i>j;i--){
		t=a[i];
		a[i]=a[j];
		a[j++]=t;
	}
	j=0;
	for(i=strlen(b)-1;i>j;i--){
		t=b[i];
		b[i]=b[j];
		b[j++]=t;
	}
	// a>0, b>0
	if(a[strlen(a)-1]<='9' && b[strlen(b)-1]<='9'){
		for(i=0;i<strlen(a)-1 || i<strlen(b)-1;i++){
			c[i]=c[i]+(a[i]+b[i])-96;
			if(c[i]>9) {
				c[i]=c[i]%10+48;
				c[i+1]=1;
			}
			c[i]=c[i]+48;
		}
		if(i>strlen(a))
			for(j=i;j<strlen(b);j++)
				c[j]=b[j];
		else if(i>strlen(b))
			for(j=i;j<strlen(a);j++)
				c[j]=a[j];
	}
	// a>0, b<0
	else if(a[strlen(a)]<='9' && b[strlen(b)]>'9'){
	
	}
	// a<0, b>0

	else if(a[strlen(a)]>'9' && b[strlen(b)]<='9'){
	
	}
	// a<0, b<0
	else {
	
	}
	printf("%s",c);
	return 0;
}


		

