#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
int isprime(long long n){
    long long i;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3;i*i<n;i+=2)
        if(n%i==0) return 0;
    return 1;
}
int main() {
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200],flag[10001]= {0};
    srand(time(NULL));

    for(count=1; count<=10; count++) {
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int i;
        long long n=0;
        for(i=0; i<33; i++) {
            n<<=1;
            n|=rand()%2;
        }
        printf("%lld",n);

        fclose(out);
    }


    for(count=1; count<=10; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;


        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // 출력데이터 만들기
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        //실제 프로그램 accept
        long long n,i,ma=0;
        scanf("%lld",&n);
        while(n%2==0) n=n/2;
        if(isprime(n)) ma=n;
        else{
            if(n==1) ma=2;

            else{
                    for(i=3; i<=n; i+=2) {
                if(n%i==0) {
                    while(n%i==0) n=n/i;
                    if(i>ma)ma =i;
                }
                }
            }
        }
        if(ma) printf("%lld",ma);
        else printf("%lld",n);
        fclose(in);
        fclose(out);
    }
    return 0;
}

