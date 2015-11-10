#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
#define max(a,b) ((a)<(b)? (b):(a))
int dp[1000000];
int main() {
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200];
    srand(time(NULL));
  /*
    for(; count<=10; count++) {
        int flag1[201]= {0},flag2[201]= {0};
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int n;
        n = rand()%1000+1;
        printf("%d\n",n);
        for(int k=1;k<=n;k++){
            printf("%d %d %d %d\n",rand()%1000+1,rand()%1000+1,rand()%1000+1,rand()%1000+1);
        }
        fclose(out);
    }
*/
    for(count=1; count<=10; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;


        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // 출력데이터 만들기
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        //실제 프로그램 accept
        int n;
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            int x1,y1,x2,y2;
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            printf("%d\n",(x1!=x2)+(y1!=y2));
        }

        fclose(in);
        fclose(out);
    }

    return 0;
}

