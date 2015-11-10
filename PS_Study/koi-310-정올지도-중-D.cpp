#include<stdio.h>
#include<math.h>
int main() {
    int i,n,b[105]= {1,},m=0,a[105],c,t=0;
    scanf("%d",&n);
    scanf("%d",&c);
    for(i=n; i>0; i--) {
        a[t]=(c%(int)pow(10,i+1))/(int)pow(10,i+1);
        printf("%d ",a[t++]);
    }
    for(i=0; i<n-4; i++) {
        b[i]=b[i]*a[i]*a[i+1]*a[i+2]*a[i+3]*a[i+4];
        if(m<b[i])m=b[i];
    }
    printf("%d",m);
}
