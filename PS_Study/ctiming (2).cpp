#include<cstdio>
int main(){
	int sd=11,sh=11,sm=11, ed,eh,em;
	int rd,rh,rm;
	scanf("%d%d%d",&ed,&eh,&em);
	rd=ed-sd;
	rh=eh-sh;
	rm=em-sm;
	if (rd<0 || (rd==0 && rh<0) || (rd==0 && rh==0 && rm<0)) printf("-1");
	else printf("%d",((rd*24+rh)*60+rm));
}
	
	