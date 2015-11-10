
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
    int n;
    for(count=1; count<=10; count++) {
        FILE *out;
        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);

        int temp1=0,data,i,j;
        for(i=1; i<=17; i++) {
                data=rand()%2;
                temp1|=data;
                temp1<<=1;
        }
        printf("%d\n",temp1);
        temp1=0;
        for(j=1; j<=n; j++) {
            for(i=1; i<=10; i++) {
                temp1<<=1;
                data=rand()%2;
                if(data==0) temp1=~temp1;
                temp1|=data;
            }
            printf("%d ",temp1);
            temp1=0;
        }
        fclose(out);
    }
    /*
    freopen("data008.in","w+",stdout);
    n=1000;
    printf("%d\n",n);
    for(int i=1; i<=n; i++)
        printf("%d ", n);


    freopen("data009.in","w+",stdout);
    n=1000;
    printf("%d\n",n);
    for(int i=1; i<=n; i++)
        printf("%d ", -n);


    freopen("data010.in","w+",stdout);
    n=1000;
    printf("%d\n",n);
    for(int i=1; i<=n; i++)
        printf("%d ", 0);

 */
    for(count=1; count<=10; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;
        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        int n,i,j,result;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&data[i]);
        M[0]=data[0];
        for(i=1; i<n; i++) {
            if(data[i]>M[i-1]+data[i]) M[i]=data[i];
            else M[i]=M[i-1]+data[i];
        }
        result=M[0];
        for(i=0; i<n-1; i++)
            if(result<M[i+1]) result=M[i+1];
        printf("%d",result);

        fclose(in);
        fclose(out);
    }

    return 0;
}

