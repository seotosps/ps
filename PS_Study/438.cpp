//438

#include<cstdio>
int a,b,n,c,d;
main(){for(scanf("%d",&n);n>0;n--){for(scanf("%d%d",&a,&b),b=b*b;b>0;b--){scanf("%d",&c);if(c==1)d++;}if((d+a)%2==0) puts("pass");else puts("fail");d=0;}}
