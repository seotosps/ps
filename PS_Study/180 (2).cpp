#include<cstdio>
int n,a[20001],i,t;
void h(int n){if (n<=1) return;if( a[n]>a[n/2]){t=a[n/2];a[n/2]=a[n];a[n]=t;h(n/2);}}
main(){for(i=1,scanf("%d",&n);i<=n;i++){scanf("%d",&a[i]);h(i);}for(i=1;i<=n;i++)printf("%d ",a[i]);}
