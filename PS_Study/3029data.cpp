#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 1048576
#define max(a,b) ((a)<(b)? (b):(a))
int change(int m, unsigned long long int t) {
    int temp=0,digit=m;
    while(t) {
        temp+=m*(t%10);
        m=m*m;
        t=t/10;
    }
    return temp;
}
int main() {
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200];
    srand(time(NULL));
    for(; count<=10; count++) {
        int flag1[201]= {0},flag2[201]= {0};
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int m, k;
        unsigned long long int t=0;
        m = (rand())%9+2;
        for(;;) {
            int rnd=rand()%m;
            t=t*10+rnd;
            if(change(m,t)>MAX) {
                t=t/10-rnd;
                break;
            }
        }
        do {
            k= (rand())%9+2;
        } while(m==k);

        printf("%d %llu\n%d",m,t,k);
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
        int k, t, m;
        scanf("%d%d%d",&k, &t,&m);
        // 10진법으로 변환
        int value=0,temp=0;
        value= change(k,t);
        while(value) {
            temp=temp*10+value%m;
            value=value/m;
        }
        printf("%d",temp);
        fclose(in);
        fclose(out);
    }
    return 0;
}

