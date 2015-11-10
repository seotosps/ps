
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000001
#define MUL 1000
char buffer1[200],buffer2[200];
int M[100001],data[100001];
int main() {
    // 입력데이터 만들기
    int count;

    srand((unsigned)time(NULL));
    for(count=1; count<=10; count++) {
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);
        int a,b,c;
        a=rand()%100+1;
        b=rand()%100+1;

        printf("%d %d \n",a,b);
        for(int i=1 ; i<=a;i++){
            printf("%d ",rand()%101);
        }

        fclose(out);
    }

    for(count=1; count<=10; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;
        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        int a,b,temp,flag=0;
        scanf("%d%d",&a,&b);
        for(int i=1;i<=a;i++){
                scanf("%d",&temp);
                if(temp==b) {
                        printf("%d",a-i);
                        flag=1;
                        break;
                }
        }
        if(flag==0) printf("0");

        fclose(in);
        fclose(out);
    }

    return 0;
}



