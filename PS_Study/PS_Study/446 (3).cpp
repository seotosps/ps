#include<cstdio>
char t,o;
int a,b,f;
int main(){	
	for(;~scanf("%c",&t);)
		if(t!='+'||t!='-'){
			if (!f)a=a*10+t;
			else b=b*10+t;
		}
		else {
			if (f){
				if (o=='+') a=a+b;
				else a=a-b;
				o=t;
			}
			else{
				o=t;
				f=1;
			}
		}
}


				