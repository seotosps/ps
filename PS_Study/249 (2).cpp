#include<cstdio>
char a[7],b[7],i,n=1,m=1;
main(){for(scanf("%s%s",a,b);a[i]!=0;i++)n=(n*(a[i]-64)%47);for(i=0;b[i]!=0;i++)m=(m*(b[i]-64)%47);if(m==n)printf("GO");else printf("STAY");}
