#include<cstdio>
int l,n,a[10000],i,f,s;
int main(){	
	for(scanf("%d%d",&l,&n);i<n;i++){
		scanf("%d",a+i);
		if(a[i]<l-a[i]){
			if(f<a[i]) f=a[i];
			if(s<l-a[i]) s=l-a[i];
		}
		else{
			if(f<l-a[i]) f=l-a[i];
			if(s<a[i]) s=a[i];
		}
	}
	printf("%d %d",f,s);
	return 0;
}
