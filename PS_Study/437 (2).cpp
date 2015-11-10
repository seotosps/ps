// koistudy 437

#include<cstdio>
int n,a,b=100,c;
main(){for(~scanf("%d",&n);n>0;n--){scanf("%d",&a);if(b>a)b=a;c=c+a;}printf("%d",c-b);
}
