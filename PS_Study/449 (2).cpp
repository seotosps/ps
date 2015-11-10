/* 2011koi지역본선초1*/

#include<cstdio>
int main(){int c=0,a,b,i=4,d;for(;i>0;i--){scanf("%d%d",&a,&b);d=c+b-a;if(c<d) c =d;}printf("%d",c);
}