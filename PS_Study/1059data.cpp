
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
        a=rand()%10+1;
        b=rand()%10+1;
        c=rand()%8+2;

        printf("%d %d %d\n",a,b,c);
        for(int i=1 ; i<=b;i++){
            for(int j=1 ; j<=a;j++)
                printf("%d ",rand()%101);
            printf("\n");
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

        int a,b,c,temp,flag=0;
        scanf("%d%d%d",&a,&b,&c);
        for(int i=1;i<=b;i++)
        for(int j=1;j<=a;j++){
                scanf("%d",&temp);
                if(temp %c==0) {
                        printf("%d %d\n",i,j);
                        flag=1;
                }
        }
        if(flag==0) printf("0");

        fclose(in);
        fclose(out);
    }

    return 0;
}


