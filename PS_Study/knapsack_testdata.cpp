
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000001
#define MUL 1000
int data[0xffffff];
char buffer1[200],buffer2[200];
int main()
{
	// 입력데이터 만들기
	int count;

	srand((unsigned)time(NULL));

	for(count=1;count<=10;count++){
        FILE *out;
		sprintf(buffer1,"data%03d.in",count);
		out=freopen(buffer1,"w+",stdout);
		int n, W;
		n = rand()%100+1;
		W=rand()%10000+1;
		printf("%d %d\n",n,W);
		for(int i=1;i<=n;i++)
			printf("%d %d\n",rand()%100+1,rand()%100+1);		
		fclose(out);
	}

	/*
	for(count=1;count<=10;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;
		sprintf(buffer1,"data%03d.in",count);
		in=freopen(buffer1,"r",stdin);
		sprintf(buffer2,"data%03d.out",count);
		out=freopen(buffer2,"w+",stdout);

        int n, i=2,j,tc=0;
        scanf("%d",&n);
        if(n>2){
            for(i=3;i*i<n;i+=2){
                if(!data[i]){
                    for(j=2;j*i<=n;j++)
                        data[i*j]=1 ;
                }
            }
           for(i=3;i<=n;i=i+2){
                if(!data[i]){
                        tc++;
                }
            }
            printf("%d",tc+1);
        }
        else printf("1");



		fclose(in);
		fclose(out);
	}
	*/
	return 0;
}
