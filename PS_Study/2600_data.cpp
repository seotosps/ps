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
	char buffer1[200],buffer2[200],flag[10001]={0};
	srand(time(NULL));
	for(;count<=20;count++){
		FILE *out;
		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);

		int n;
		do{
                n=rand()%10000+1;
                if(!flag[n]){ flag[n]=1;
                    break;
                }
		}while(1);
		flag[n]=1;
		printf("%d ",n);
		int a, b;
		do{
            a =rand()%1000+1;
            b =rand()%1000+1;
		}while(a==b || a>n || b>n);
		printf("%d %d",a,b);
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

		int n,a,b;
		scanf("%d %d %d",&n,&a,&b);
		int i,cnt=0;
		long long sum=0;
		for(i=1;i<n;i++){
                if(i%a==0 || i%b==0){
                        sum+=i;
                        cnt++;
                }
		}

        printf("%lld %d",sum,cnt);

		//실제 프로그램 accept


		fclose(in);
		fclose(out);
	}
	return 0;
}
