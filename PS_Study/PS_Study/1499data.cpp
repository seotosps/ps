#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
#define max(a,b) ((a)<(b)? (b):(a))
int gcd(int a, int b){
    return b==0?a:gcd(b,a%b);
}
int main() {
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200];
    srand(time(NULL));
    for(count=21; count<=30; count++) {
        int flag1[201]= {0},flag2[201]= {0};
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int c=0,d=0;
        for(int i=1;i<=14;i++){
            int temp1=rand()%2;
            int temp2=rand()%2;
            c=c|temp1;
            c<<=1;
            d=d|temp2;
            d<<=1;
        }
        printf("%d %d ",c,d);
        int k;
        do{
            k = (rand()*rand())%c+1;
        }while(c<k);
        printf("%d" , k);
        fclose(out);
    }

    for(count=21; count<=30; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;


        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // 출력데이터 만들기
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        //실제 프로그램 accept
        int b,c,d;
        scanf("%d%d%d",&c,&d,&b);
        int com = gcd(c,b);
        int lcd = (c/com)*b;
        printf("%d",lcd/b-1);

        // 최대공약수 구하기



        fclose(in);
        fclose(out);
    }
    return 0;
}


