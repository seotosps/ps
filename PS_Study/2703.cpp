#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10000000
int main() {
    // 입력데이터 만들기
    int count=1;
    int flag[12000]= {0};
    char buffer1[200],buffer2[200];
    srand(time(NULL));
    for(; count<=20; count++) {
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int n;
        do{
            n=rand()%10000;
        }while(flag[n]) ;
        flag[n]=1;
        printf("%d",n);
        fclose(out);
    }
    for(count=1; count<=20; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;
        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // 출력데이터 만들기
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        int m=0,n,i;

        int d[5]= {500,100,50,10,1};
        scanf("%d",&n);
        for(i=0; n; i++) {
            m+=n/d[i];
            n=n%d[i];
        }
        printf("%d",m);
        m=0;
        //실제 프로그램 accept


        fclose(in);
        fclose(out);
    }
    return 0;
}

