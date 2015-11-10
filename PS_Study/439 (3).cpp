//439

#include<cstdio>
f(int b){

}
int a;
main(){
	char b;
	for(;~scanf("%c",&b);){
		if(b==10) break;		
		if(b<70) a=a+(b-65)*10;
		else a=a+(b-92)*10;		
	}
	printf("%d",a);
}

