#include<stdio.h>
#include<string.h>
int main(){
	char s[400];
	int sad=0, happy=0,len;
	fgets(s,400,stdin);
	len=strlen(s);
	for(int i=0;i<len-2;i++){
		if(s[i]==':' && s[i+1]=='-'){
			if(s[i+2]==')') happy++;
			else if(s[i+2]=='(') sad++;
		}
	}
	if(happy ==0 && sad ==0) printf("none");
	else if(happy>sad) printf("happy");
	else if(happy<sad) printf("sad");
	else printf("unsure");

	return 0;
}