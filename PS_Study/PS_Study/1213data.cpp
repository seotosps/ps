#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 1048576
#define max(a,b) ((a)<(b)? (b):(a))
int main() {
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200];
    srand(time(NULL));

    for(; count<=20; count++) {
        int flag1[201]= {0},flag2[201]= {0};
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int n,k, a, b;
        n=rand()%48+3;
        k=rand()%1000+1;
        printf("%d %d\n",n,k);
        for(int i=1;i<=n;i++)
          printf("%d ",rand()%1000+1);
        do{
            b=rand()%49+2;
        }while(b>n);
        do{
            a=rand()%50+1;
        }while(a>=b);
        printf("\n%d %d",a,b);
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

        //실제 프로그램 accept
        int n, a, b, data[100];
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
          scanf("%d",data+i);
        scanf("%d%d",&a,&b);
        int temp = data[b];
        for(int i=b-1;i>=a; i--)
            data[i+1]=data[i];
        data[a]=temp;
        for(int i=1;i<=n; i++)
          printf("%d ",data[i]);
        fclose(in);
        fclose(out);
    }
    return 0;
}



