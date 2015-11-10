


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
		sprintf(buffer1,"data%04d.in",count);
		out=freopen(buffer1,"w+",stdout);
		int n;
        n = (rand()*rand())%100000+1;
        printf("%d",n);
		fclose(out);
	}

	for(count=1;count<=10;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;


		sprintf(buffer1,"data%04d.in",count);
		in=freopen(buffer1,"r",stdin);
				// 출력데이터 만들기
		sprintf(buffer2,"data%04d.out",count);
		out=freopen(buffer2,"w+",stdout);

		//실제 프로그램 accept
        long long d[100001]={0,1,2};
        int n;
        scanf("%d",&n);
        for(int i=3;i<=n;i++)
            d[i]=(d[i-1]+d[i-2])%1000007;
        printf("%lld",d[n]);

		fclose(in);
		fclose(out);
	}
	return 0;
}
