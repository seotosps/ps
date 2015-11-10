

#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
#define max(a,b) ((a)<(b)? (b):(a))
int dp[1000000];
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
        int money, cnt, dong[10000]={0};
        money = (rand()*rand())%1000000+1;
        cnt = rand()%20+1;
        printf("%d\n%d\n",money,cnt);
        for(int i =1 ;i<cnt; i++){
            do{
                    int temp = rand()%100+2;
                    if(!dong[temp]) {
                            dong[temp]=1;
                            printf("%d ",temp);
                            break;
                    }
            }while(1);
        }
        printf("1 ");
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
        int money, cnt, dong[20],sp=0;
        scanf("%d\n%d\n",&money, &cnt);
        for(int i=0;i<cnt;i++){
            scanf("%d",dong+i);
            dp[dong[i]]=1;
        }
        for(int i=1;i<=money;i++)
            if(dp[i]==1) {
                    sp =i;
                    break;
            }
        int min=123456789;
        for(int i=sp; i<=money;){
            if(!dp[i]){
                int min=123456789;
                for(int k = 0;k<cnt;){
                    if(i-dong[k] >=0 && min > dp[i-dong[k]] && dp[i-dong[k]]>=1){
                        min = dp[i-dong[k]]+1;
                    }
                    k++;
                }
                dp[i]=min;
            }
           i++;
        }
        printf("%d",dp[money]);
        for(int i=1;i<=money;i++)
            dp[i]=0;

		fclose(in);
		fclose(out);
	}
	return 0;
}
