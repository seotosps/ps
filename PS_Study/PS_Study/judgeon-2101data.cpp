#include<iostream>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000
int main()
{
	// 입력데이터 만들기
	int count=1;
	char buffer1[200],buffer2[200];
	srand(time(NULL));
	for(;count<=20;count++){
        int flag[10001]={0};
		FILE *out;
		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);
		int n;
		n=rand()%1000+1;
        printf("%d\n",n);
		for(int k=1;k<=n;k++){
            do{
                    int temp = rand()%5000+1;
                    if(flag[temp]==0) {
                            flag[temp]++;
                            printf("%d ",temp);
                            break;
                    }
            }while(1);

		}
		fclose(out);
	}

	for(count=1;count<=20;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;


		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);
				// 출력데이터 만들기
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

		//실제 프로그램 accept

		int n,ma[2000],mi[2000];
		scanf("%d",&n);

		for(int i = 1; i<=n;i++){
                scanf("%d",&ma[i]);
                mi[i]=ma[i];
		}
        // 최대힙
        for(int i=1; i<=n;i++){
            int k = i;
            int temp = ma[i];
            while(k>1){
                    if(temp < ma[k/2]) break;
                    ma[k]=ma[k/2];
                    k/=2;
            }
            ma[k]=temp;
        }
        for(int i=1;i<=n; i++)
            printf("%d ",ma[i]);
        printf("\n");

        // 최소힙
        for(int i=1; i<=n;i++){
            int k = i;
            int temp = mi[i];
            while(k>1){
                    if(temp > mi[k/2]) break;
                    mi[k]=mi[k/2];
                    k/=2;
            }
            mi[k]=temp;
        }
        for(int i=1;i<=n; i++)
            printf("%d ",mi[i]);

		fclose(in);
		fclose(out);
	}
	return 0;
}
