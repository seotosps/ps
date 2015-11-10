#include<stdio.h>
long long a[101][3][101]= {0},n,temp,temp2;
int main() {
    char str[10],cou=2;
    while(cou<=10) {
        sprintf(str,"data%02d.out",cou);
        freopen(str,"w",stdout);
        scanf("%lld",&n);
        a[1][0][1]=1;
        for(int i=2; i<=n; i++)
            for(int j=1; j<=i; j++) {
                temp=a[i-1][0][j-1]+a[i-1][0][j];
                temp2=a[i-1][1][j-1]+a[i-1][1][j]+temp/10000000;
                a[i][2][j]=a[i-1][2][j-1]+a[i-1][2][j]+temp2/10000000;
                a[i][0][j]=temp%10000000;
                a[i][1][j]=temp2%10000000;
            }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
                if(a[i][2][j]!=0) {
                    printf("%lld%lld%lld ",a[i][2][j],a[i][1][j],a[i][0][j]);
                } else if(a[i][1][j]!=0) {
                    printf("%lld%lld ",a[i][1][j],a[i][0][j]);
                } else
                    printf("%lld ",a[i][0][j]);
            }

            printf("\n");
        }
        cou++;
    }
    return 0;
}
