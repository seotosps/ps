
#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
#define max(a,b) ((a)<(b)? (b):(a))
int main()
{
	// 입력데이터 만들기
	int count=1;
	char buffer1[200],buffer2[200];
	srand(time(NULL));
	for(;count<=10;count++){
        int flag1[201]={0},flag2[201]={0};
		FILE *out;
		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);
        int n,m;
        do{
            n=rand()%101+100;
            if(!flag1[n]) {
                    flag1[n]=1;
                    printf("%d ",n);
                    break;
            }
        }while(1);
        do{
            m=rand()%101+100;
            if(!flag2[m]) {
                    flag2[m]=1;
                    printf("%d\n",m);
                    break;
            }
        }while(1);
        for(int i=1; i<=n; i++){
            for(int k=1;k<=m;k++)
                printf("%d ",rand()%2);
            printf("\n");
        }


		fclose(out);
	}

	for(count=1;count<=10;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;


		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);
				// 출력데이터 만들기
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

		//실제 프로그램 accept
            int map[210][210]={0};
            int n, m;
            scanf("%d%d",&n,&m);
            for(int i=1;i<=n;i++)
                for(int k=1;k<=m;k++)
                    scanf("%d",&map[i][k]);
            for(int i=1;i<=n;i++){
                for(int k=1;k<=m;k++){
                    map[i][k]+=max(map[i-1][k], map[i][k-1]);
                }
            }
            printf("%d",map[n][m]);
		fclose(in);
		fclose(out);
	}
	return 0;
}
