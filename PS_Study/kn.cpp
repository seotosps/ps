#include<cstdio> 
#include<algorithm>
int main(){  
	int a[3];
	scanf("%d%d%d",a+0,a+1,a+2);
	
	if(a+b<=c) printf("»ï°¢Çü¾Æ´Ô");
	else if(a==b && b==c) printf("Á¤»ï°¨Çü");
	else if(a==b || b==c || c==a) printf("ÀÌµîº¯»ï°¢Çü");
	else if(a*a+b*b==c*c) printf("Á÷°¢»ï°¢Çü");
	else printf("»ï°¢Çü");
	return 0;
}  