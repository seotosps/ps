#include<cstdio>
int n, a[101],b[2001],k,i,c;
main(){scanf("%d",&n);for(i=1;i<=n;i++,a[b[i]]++){scanf("%d",&b[i]);a[b[i]]++;}for(i=1;i<=n;i++){for(k=b[i]+1;k<=100;k++)if(a[k]>0)c+=a[k];printf("%d ",c+1);c=0;}}

