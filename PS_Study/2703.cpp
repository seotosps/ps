#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10000000
int main() {
    // �Էµ����� �����
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
        // �Էµ����� �Է¹ޱ�
        FILE *in,*out;
        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // ��µ����� �����
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
        //���� ���α׷� accept


        fclose(in);
        fclose(out);
    }
    return 0;
}

