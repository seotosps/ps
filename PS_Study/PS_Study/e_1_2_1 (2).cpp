/*
int palidrome(char *s){
	int i =0;
	int j=strlen(s)-1;

	while(i<j){
		if(s[i]!=s[j]) return 0;
		i++;
		j--;
	}
	return 1;
}

  */
/*
#include<stdio.h>

int sum(int a, int b){
    return a+b;	
}

int main(){
	int i=3,j=5,result=0;
	result = sum(i,j);
	printf("%d",result);	
	return 0;
}

*//*
#include<stdio.h>
int a=3, b=5;
void exchange(){
	int temp;
	temp =a;
	a=b;
	b=temp;
}

int main(){
	
	exchange();
	printf("%d %d",a,b);
	return 0;
}
*/
#include <stdio.h>
int a[91];
int f(int n){	
	if(a[n]!=0) return a[n];
	if(n<=2) a[n]=1;
	else a[n]=f(n-2)+f(n-1);
	return a[n];
	
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	
}


	

	
	

