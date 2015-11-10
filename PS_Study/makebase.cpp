#include<iostream>
#include<math.h>
#include<time.h>
#define MAX 10000000
int main()
{
	// 입력데이터 만들기
	int count=1;
	char buffer1[200],buffer2[200],flag[101]={0};
	srand(time(NULL));
	for(;count<=20;count++){
		FILE *out;

		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);

		int n;
		while(!flag[n]) n=rand()%100+1;
		flag[n]=1;
		printf("%d",n);
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

		int n;
		scanf("%d",&n);





		//실제 프로그램 accept


		fclose(in);
		fclose(out);
	}
	return 0;
}
