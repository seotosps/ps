#include<stdio.h>
#include<algorithm>
#include<time.h>
#include<stdlib.h>
using namespace std;
struct stu
{
    int reg,order;
} d[1000001];
int dap[1000001];
int maked[1000001];
int cmp(stu a, stu b)
{
    return a.order>b.order;
}
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
        int n=((rand()%1000)*(rand()%1000)+1)%1000001;
        printf("%d\n",n);
        int num=0;
        for(int i=1; i<=n; i++)
        {
            do
            {
                num=((rand()%1001)*(rand()%1001)+1)%1000001;
            }
            while(maked[num]);
            printf("%d ",num);
        }

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

        int n=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&d[i-1].order);
            d[i-1].reg=i;
        }
        sort(d,d+n,cmp);
        for(int i=0; i<n; i++)
            dap[d[i].reg]=i+1;
        for(int i=1; i<=n; i++)
            printf("%d %d\n",i,dap[i]);
        fclose(in);
		fclose(out);
    }
    return 0;
}
