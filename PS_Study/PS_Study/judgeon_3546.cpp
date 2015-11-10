#include<stdio.h>
//최대공약수
int n,d[20],tmp,t=0;
int gcd(int a, int b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int flag=1;
		scanf("%d",&tmp);
		for(int k=0;k<=i;k++)
			if(tmp == d[k]) { flag =0;break;}
		if(flag) d[t++]=tmp;
	}
	//gcd
	tmp=d[0];		
	int lcd=d[0];
	for(int i=1;i<t;i++){
		tmp = gcd(d[i],tmp);
	}

	printf("
	
	



	return 0;
}
