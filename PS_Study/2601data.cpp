#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000

int main() {
    // �Էµ����� �����
    int count=1;
    char buffer1[200],buffer2[200],flag[10001]= {0};
    srand(time(NULL));
    /*
    for(; count<=20; count++) {
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int i;
        n=0;
        for(i=0;i<32;i++){
            n<<=1;
            n|=rand()%2;
        }
        printf("%lld",n);

        fclose(out);
    }
    */
    for(count=1; count<=20; count++) {
        // �Էµ����� �Է¹ޱ�
        FILE *in,*out;


        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // ��µ����� �����
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        //���� ���α׷� accept
        long long n=0,a=0,b=1,c=0,os=0,es=0;
        scanf("%lld",&n);
        do {
            c=a+b;
            a=b;
            b=c;
            if(c>n) break;
            if(c%2) os+=c;
            else es+=c;
        } while(1);
        printf("%lld %lld",es,os);
        fclose(in);
        fclose(out);
    }
    return 0;
}
