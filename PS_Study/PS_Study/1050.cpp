#include<stdio.h>
#include<algorithm>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int count=1;
    char buffer1[200],buffer2[200];
    srand(time(NULL));

    for(count=1; count<=10; count++)
    {
        FILE *out;

        sprintf(buffer1,"data%02d.in",count);
        out=freopen(buffer1,"w+",stdout);

        int n=((rand()%1000)*(rand()%10000))+1;
        printf("%d",n);

        fclose(out);
    }
   for(count=1;count<=10;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;
		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

        int n,cnt=0;
        scanf("%d",&n);
        while(n){
            if(n % 2==1) cnt++;
            n=n/2;
        }
        printf("%d",cnt);

        fclose(in);
		fclose(out);
    }
    return 0;
}

