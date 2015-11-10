#include<cstdio>
int d[351][351],n,i,j,k,m,a,b;
main(){scanf("%d%d",&n,&d[1][1]);for(i=2;i<=n;i++)for(j=1;j<=i;j++){scanf("%d",&k);a=d[i-1][j];b=d[i-1][j-1];if(j==1 || b<=a) d[i][j]=a+k;if(j==i || b>a) d[i][j]=b+k;if(n==i && d[n][j]>m) m=d[n][j];}printf("%d",m);}